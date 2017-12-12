cat $1 | grep -wi "Nicolas" | grep -wi "Bomber" | awk '{print $(NF-1)}'
