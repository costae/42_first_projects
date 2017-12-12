ldapsearch -x "uid=z*" | grep "cn:" >> f.txt
sort -r -d f.txt | cut -d " " -f 2,3
rm f.txt
