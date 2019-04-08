#!/bin/bash
a="`cat $1 | head -1 | wc -w`"
for ((i=1;i<=a;i++))
do 
    b="`cut -d " " -f $i $1`"
    echo $b 
done    