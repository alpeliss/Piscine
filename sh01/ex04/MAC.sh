ifconfig | grep "ether " | awk -F "ether " '{print $2}' | sed "s/.$//"
