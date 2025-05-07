#!/usr/bin/env python3
import sys
from collections import namedtuple
import clang.cindex
import utils as u

# -----------------------------------------------------------------------------
# Define LoopData to match your existing structure
# -----------------------------------------------------------------------------

def _compute_line_offsets(src):
    """Returns a list where line_offsets[i] is the byte‐offset of the start of line i+1."""
    offsets = []
    o = 0
    for line in src.splitlines(keepends=True):
        offsets.append(o)
        o += len(line)
    return offsets

def _loc_to_offset(line, column, line_offsets):
    # clang columns are 1-based
    return line_offsets[line-1] + (column-1)

def extract_loops(c_file, clang_args=None):
    """
    Parse c_file and return a list of LoopData for each while/for/do loop found.
    """
    clang_args = clang_args or []
    # 1) Read the whole file into memory
    with open(c_file, 'r') as f:
        full_code = f.read()
    line_offsets = _compute_line_offsets(full_code)

    # 2) Parse with libclang
    idx = clang.cindex.Index.create()
    tu = idx.parse(c_file, args=clang_args)

    loops = []
    next_id = 0
    for node in tu.cursor.walk_preorder():
        kind = node.kind
        if kind in (
            clang.cindex.CursorKind.WHILE_STMT,
            clang.cindex.CursorKind.FOR_STMT,
            clang.cindex.CursorKind.DO_STMT
        ):
            # only loops in our file
            if node.location.file and node.location.file.name == c_file:
                start = node.extent.start
                end   = node.extent.end

                # compute byte‐offsets into full_code
                so = _loc_to_offset(start.line, start.column, line_offsets)
                eo = _loc_to_offset(end.line,   end.column,   line_offsets)

                snippet = full_code[so:eo]
                if kind.name == "WHILE_STMT":
                    l_type = "WhileStmt"
                elif kind.name == "FOR_STMT":
                    l_type = "ForStmt"
                else:
                    l_type = "DoStmt"

                loops.append(u.LoopData(
                    loop_id     = str(next_id),
                    loop_code   = snippet,
                    beg_line    = str(start.line),
                    end_line    = str(end.line),
                    loop_type   = l_type,       # e.g. "WHILE_STMT"
                    full_code   = full_code,
                    variant     = None,
                    invariant   = None,
                    assigns     = None
                ))
                next_id += 1

    return loops

# -----------------------------------------------------------------------------
# If run as a script, dump all LoopData to stdout
# -----------------------------------------------------------------------------
if __name__ == '__main__':
    import argparse, json

    p = argparse.ArgumentParser(
        description="Extract loops from a C source file and dump as JSON"
    )
    p.add_argument('c_file', help="path to your .c file")
    p.add_argument(
        '--clang-args', nargs='*', default=[],
        help="extra flags for clang (e.g. include paths)"
    )
    args = p.parse_args()

    loops = extract_loops(args.c_file, args.clang_args)
    # convert each LoopData to a dict
    loops_dicts = [ld._asdict() for ld in loops]
    print(json.dumps(loops_dicts, indent=2))
