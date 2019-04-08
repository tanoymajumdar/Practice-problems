#!/bin/bash
y=0
m=""
p=""
q=""
    for i in *.txt
    do
        words=(`wc -w "$i"`)
        echo "$i:  ${words[0]} words"
        m=(`./getKeyword.sh "$i"`)
        x=(`./getKeyword.sh "$i"`)
        if [ "${x[1]}" -gt "$y" ]
        then    
            y="${x[1]}"
            p="${m[0]}"
            q=$i
        fi    
        echo "Keyword: "${m[0]}""
        echo "`grep ${m[0]} "$i" | head -n3`"
        echo
    done
    echo "The word is: "\'$p\'" in "$q""
