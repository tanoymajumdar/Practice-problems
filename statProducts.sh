#!/bin/bash
for i in *.log
do 
    a=(`./getProductAccess.sh $i | cut -f2 | sort | uniq -c | sort -n -r | head -n 1`)    
    echo "$i: ${a[1]}"
    echo "Last three product page access:"
    grep "/products/" $i | tail -n 3
    echo
done    