touch bomb.txt; stat -r bomb.txt | cut -d' ' -f 9 | echo $(cat) - 1 | bc
