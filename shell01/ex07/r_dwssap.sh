cat /etc/passwd  | cut -d':' -f1 | sed -n 'p;n' | rev | sort -r | tail -n +$FT_LINE1 | head -n $((FT_LINE2-FT_LINE1+1)) | paste -sd, | sed 's/, */, /g' | tr '\n' '.'
