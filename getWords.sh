#!/bin/bash
if [ $# -ge 1 ]
then
    for i in `cat "$1"`
    do 
        echo $i
    done 
fi 