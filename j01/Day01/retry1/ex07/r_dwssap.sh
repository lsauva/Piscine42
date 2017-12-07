#!/bin/bash
# cat /etc/passwd | grep -v '#' | sed -n '2,${p;n;}' | cut -d : -f 1 | rev | sort -r | awk 'NR>='$FT_LINE1' && NR<='$FT_LINE2 | tr '\n' ',' | sed 's|,|, |g' | rev | sed 's| ,|.|' | rev | tr -d '\n'
cat /etc/passwd | grep -v '\#' | sed '1!n;d' | cut -d':' -f1 | rev | sort -r | awk 'NR>= ENVIRON["FT_LINE1"] && NR<= ENVIRON["FT_LINE2"]' | paste -s -d"," - | sed 's/,/, /g' | sed 's/$/./' | tr -d '\n'
