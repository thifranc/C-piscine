ldapsearch -xLLL "uid=z*" cn | sort -r | grep -i "cn" | cut -d " " -f2,3
