#!/bin/bash
infile="${1:-passwords.txt}"
outdir="${2:-pw_files}"

mkdir -p "$outdir"

sort "$infile" | while read -r pw; do
    [ -z "$pw" ] && continue
    echo "$pw"
    printf '%s\n' "$pw" > "$outdir/$pw.txt"
done

echo "--- wrote $(ls "$outdir" | wc -l) files ---"
