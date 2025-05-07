#!/usr/bin/env python3
"""
benchmark_termination.py

Run check_ter.py on SV-COMP termination benchmarks and report accuracy.
Usage:
    python3 benchmark_termination.py \
        --benchmarks-root /path/to/sv-benchmarks \
        --check-ter-script /path/to/check_ter.py [--model-path /path/to/model]
"""
import os
import subprocess
import argparse
import yaml

# Categories under sv-benchmarks/c to include
CATEGORIES = [
    "termination-crafted",
    # "termination-crafted-lit",
    # "termination-numeric",
    # "termination-restricted-15",
    # "termination-nla",
    # "termination-dietlibc", 
    # "termination-memory-alloca",
    # "termination-memory-linkedlists",
    # "termination-15",
    # "termination-recursive-malloc",
    # "array-examples",
    # "array-industry-pattern",
    # "bitvector",
    # "bitvector-regression",
    # "bitvector-loops",
    # "ntdrivers-simplified",
    # "openssl-simplified",
    # "locks",
    # "loop-simple",
    # "ntdrivers",
    # "eca-rers2012",
    # "psyco",
    # "float-benchs",
    # "floats-cdfpl",
    # "floats-cbmc-regression",
    # "ldv-regression",
    # "signedintegeroverflow-regression",
    # "list-ext-properties", 
    # "list-ext2-properties",
    # "ldv-sets",
    # "loops",
    # "loop-acceleration",
    # "loop-crafted",
    # "loop-invariants",
    # "loop-invgen",
    # "loop-lit",
    # "loop-new",
    # "product-lines",
    # "recursive",
    # "recursive-simple",
    # "systemc",
    # "seq-mthreaded",
    # "seq-pthread",
    # "reducercommutativity",
    # "array-memsafety",
    # "memsafety",
    # "memsafety-ext",
    # "ldv-memsafety",
    # "ldv-memsafety-bitfields",
    # "uthash-2.0.2",
    # "recursified_loop-crafted",
    # "recursified_loop-invariants",
    # "recursified_loop-simple"
]


def find_yamls(root_dir):
    """
    Yield full paths to all .yml files in the selected categories.
    """
    for cat in CATEGORIES:
        cat_dir = os.path.join(root_dir, 'c', cat)
        if not os.path.isdir(cat_dir):
            continue
        for dirpath, _, files in os.walk(cat_dir):
            for fname in files:
                if fname.endswith('.yml'):
                    yield os.path.join(dirpath, fname)


def parse_yaml(yml_path, root_dir):
    """
    Parse a benchmark YAML to extract the C source path and expected result.
    Returns tuple (c_file_path, expected_bool).
    """
    with open(yml_path, 'r') as f:
        data = yaml.safe_load(f)

    term_verdict = None
    for prop in data.get('properties', []):
        pf = prop.get('property_file', '')
        # Look for termination property
        if pf.endswith('termination.prp'):
            term_verdict = bool(prop.get('expected_verdict', True))
            break
    if term_verdict is None:
        return None, None

    # Get input file reference
    inp = data.get('input_files') or data.get('input')
    if isinstance(inp, list):
        inp = inp[0]
    # Source .c path is relative to the YAML directory
    c_file = os.path.join(os.path.dirname(yml_path), inp)

    return c_file, term_verdict


def run_benchmarks(benchmarks_root, check_ter_script, model_path="placeholder", num_iterations='1'):
    results = []
    false_pos = 0
    false_neg = 0
    num_recursion = 0
    num_arrays = 0
    for yml_path in find_yamls(benchmarks_root):
        c_file, expected = parse_yaml(yml_path, benchmarks_root)
        if c_file is None or expected is None:
            continue
        fname = os.path.basename(c_file)
        rec = ['recursion', 'recurs', 'recursive']
        if any(k in fname.lower() for k in rec):
            num_recursion += 1
        if 'array' in fname.lower():
            num_array += 1
        # Skip if .c not found
        if not os.path.isfile(c_file):
            print(f"[WARN] C file not found for {yml_path}: {c_file}")
            continue
        # Build command
        cmd = ['python3', check_ter_script, '--in-file', c_file]
        if model_path:
            cmd.extend(['--model-path', model_path])
        if num_iterations:
            cmd.extend(['--num-iterations', num_iterations])
        # Run tool
        proc = subprocess.run(cmd, capture_output=True)
        tool_ret = proc.returncode == 0
        correct = (tool_ret == bool(expected))
        false_pos += (1 if (tool_ret and not bool(expected)) else 0)
        false_neg += (1 if (not tool_ret and bool(expected)) else 0)
        results.append({
            'benchmark': yml_path,
            'c_file': c_file,
            'expected': expected,
            'verdict': tool_ret,
            'correct': correct,
            'return_code': proc.returncode,
        })
        status = 'PASS' if correct else 'FAIL'
        print(f"{status}: {yml_path} => expected={expected}, got={tool_ret}")

    # Summary
    total = len(results)
    passed = sum(1 for r in results if r['correct'])
    print(f"\nSummary: {passed}/{total} correct ({passed/total:.1%})")
    print(f"\nSummary: {false_pos} total false positives, {false_neg} total false negatives, {num_recursion} false negatives due to recursion")


def main():
    parser = argparse.ArgumentParser(
        description="Benchmark check_ter.py on SV-COMP termination categories"
    )
    parser.add_argument('--benchmarks-root', required=True,
                        help='Root directory of the sv-benchmarks repo')
    parser.add_argument('--check-ter-script', required=True,
                        help='Path to check_ter.py')
    parser.add_argument('--model-path', required=False,
                        help='Optional path to LLAMA model file')
    parser.add_argument('--num-iterations', required=False,
                        help='Number of iterations for refinement loop')
    args = parser.parse_args()

    run_benchmarks(
        benchmarks_root=args.benchmarks_root,
        check_ter_script=args.check_ter_script,
        model_path=args.model_path, 
        num_iterations=args.num_iterations
    )


if __name__ == '__main__':
    main()
