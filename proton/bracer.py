#!/usr/bin/env python3
import sys
import clang.cindex

def _compute_line_offsets(src):
    """Return list where offsets[i] is the byte-offset of line i+1 in src."""
    offsets = []
    o = 0
    for line in src.splitlines(keepends=True):
        offsets.append(o)
        o += len(line)
    return offsets

def _loc_to_offset(line, column, line_offsets):
    # both line and column are 1-based
    return line_offsets[line-1] + (column-1)

def brace_control_bodies(src, clang_args=None, c_file: str = "input.c"):
    """
    Parses c_file, finds any if/for/while/do statements whose body is a single
    stmt (not a CompoundStmt) and computes the new source with braces inserted.
    Returns new_src if modified, else None.
    """
    clang_args = clang_args or []
    line_offsets = _compute_line_offsets(src)

    idx = clang.cindex.Index.create()
    tu = idx.parse(c_file, args=clang_args, unsaved_files=[(c_file, src)],
                   options=clang.cindex.TranslationUnit.PARSE_DETAILED_PROCESSING_RECORD)

    inserts = []  # (pos, text) to insert

    for node in tu.cursor.walk_preorder():
        K = node.kind
        if K in (
            clang.cindex.CursorKind.IF_STMT,
            clang.cindex.CursorKind.FOR_STMT,
            clang.cindex.CursorKind.WHILE_STMT,
            clang.cindex.CursorKind.DO_STMT,
        ):
            children = list(node.get_children())
            body = children[0] if K == clang.cindex.CursorKind.DO_STMT else children[-1]
            if body.kind == clang.cindex.CursorKind.COMPOUND_STMT:
                continue

            # find where the body starts and ends
            start_off = _loc_to_offset(body.extent.start.line,
                                       body.extent.start.column,
                                       line_offsets)
            end_off   = _loc_to_offset(body.extent.end.line,
                                       body.extent.end.column,
                                       line_offsets)

            # **new**: if there's a semicolon immediately after (ignoring spaces),
            # include it inside our braces
            i = end_off
            while i < len(src) and src[i].isspace():
                i += 1
            if i < len(src) and src[i] == ';':
                end_off = i + 1

            inserts.append((start_off, "{ "))
            inserts.append((end_off,   " }"))

    if not inserts:
        return None

    # apply in reverse so offsets stay valid
    new_src = src
    for pos, txt in sorted(inserts, key=lambda x: x[0], reverse=True):
        new_src = new_src[:pos] + txt + new_src[pos:]
    return new_src


if __name__ == '__main__':
    import argparse
    p = argparse.ArgumentParser(
        description="Add missing braces to single-stmt control flow bodies in a C file"
    )
    p.add_argument('c_file', help="Path to the .c file to fix")
    p.add_argument(
        '--clang-args', nargs='*', default=[],
        help="Extra flags for clang (e.g. include paths)"
    )
    p.add_argument(
        '--inplace', action='store_true',
        help="Overwrite the input file when braces are added"
    )
    args = p.parse_args()
    with open(args.c_file, 'r') as f:
        src = f.read()

    fixed = brace_control_bodies(src, args.clang_args)
    if fixed is None:
        # no changes
        sys.exit(0)

    if args.inplace:
        with open(args.c_file, 'w') as f:
            f.write(fixed)
    else:
        print(fixed)
