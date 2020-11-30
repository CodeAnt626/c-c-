#!/bin/bash
function Usage() {
    echo "Usage : $0 start_num end_num"
    exit
}

function is_prime() {
    num=$1
    local i
    if [[ $num -lt 2 ]];then
        return 1
    fi
    for (( i=2; i<$num; i++ ));do
        if [[ $[ ${num} % $i ] -eq 0 ]];then
            return 1
        fi
    done
    return 0
}

if [[ $# -ne 2 ]];then
    Usage
fi

Start=$1
End=$2

for ((i=$Start; i<=$End; i++));do
    is_prime $i
    if [[ $? -eq 0 ]];then
        sum=$[ ${sum} + $i ]
    fi
done

echo ${sum}
