#!/bin/bash
a="`cat $2`"
for i in $a
do 
    if [ $i == $1 ]
    then
        echo -e "\e[1m$i\e[m"
    else
        echo "$i"
    fi    
done

        