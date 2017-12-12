ldapsearch -x sn='*bon*' | sed 's/dc: //' | grep 'cn: ' | wc -l | sed 's/ //g'
