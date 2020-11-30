#!/bin/bash
read a
if [[ ${a} -gt 10 ]];then
    echo "$a > 10"
elif [[ ${a} -eq 10 ]];then
    echo "$a = 10"
else
    echo "${a} < 10"
fi
