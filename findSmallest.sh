#!/bin/bash
if [ $# -eq 2 ]
    then
        echo "`cut -d ',' -f"$2" "$1" | sort | head -n1`"
else
    echo "wrong arguments"
fi    