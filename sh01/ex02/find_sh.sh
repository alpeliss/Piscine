find . -name "*.sh" | awk -F "." '{ $NF = "" ; print $0 }' | awk -F "/" '{print $NF }' | sed "s/.$//"
