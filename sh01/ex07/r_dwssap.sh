cat /etc/passwd | awk '(NR + 1)%2' | awk -F ':' '{print $1}' | grep '_' | rev | sort -r | sed -n ''$FT_LINE1','$FT_LINE2'p' | tr '\n' , | sed 's/,/, /g' | sed 's/\(.*\), /\1./' | tr -d '\n'
