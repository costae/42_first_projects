cat /etc/passwd | sed '/ *#/d' | sed -n "n;p" | cut -d ":" -f 1 | rev |sort -r | sed -n "$FT_LINE1,$FT_LINE2 p;$FT_LINE2 q" | sed -n -e 'H;${x; s/\n/, /g; s/^, //; p;}' | sed 's/$/./' | tr -d "\n"
