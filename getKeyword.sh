#!/bin/bash
for i in $1
do 
    echo "`./getWords.sh $1 | sort | uniq -c | sort -n -r | head -n1 | awk ' { t = $1; $1 = $2; $2 = t; print; } '`"
done