ifconfig  | grep "\bether\b" | sed 's/^[[:blank:]]*//' | sed "s/ether //" | sed "s/ //g"
