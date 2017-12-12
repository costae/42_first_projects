ldapsearch -x cn='z*' | grep 'cn:' | sed 's/cn: //' |sort -r
