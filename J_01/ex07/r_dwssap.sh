#!/bin/sh
cat /etc/passwd | sed '/^#/d' | sed -n '2,${n;p;}' | rev | sort -r | cut -d: -f7 | awk 'NR>= ENVIRON ["FT_LINE1] && NR <= ENVIRON ["FT_LINE2"]' | paste -s -d"," -| tr "\n" "," | sed 's/,/, /g' | rev | cut -c4- | rev | sed 's/$/./g' | tr -d '\n'

