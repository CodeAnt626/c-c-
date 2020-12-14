#!/bin/bash
# 输出在线时间到/home/luowen/.onlineTime
logoutTime=`date +"%s"`
loginTime=`cat /home/luowen/.loginTime`
echo $logoutTime
echo $loginTime
onlineTime=$[ ${logoutTime}-${loginTime} ]
s=$[ ${onlineTime} % 60 ]
m=$[ (${onlineTime} - $s) / 60 ]
if [[ m > 60 ]];then
    h=$[ $m / 60 ]
    m=$[ $m % 60 ]
else
    h=0
fi
printf "%.2d时%.2d分%.2d秒\n" $h $m $s > /home/luowen/.onlineTime

# 用awk筛选该用户近期登录的总时长
last | grep -v "^$" | grep -v "wtmp" | grep -v "still"  | awk '{ if ($1 == "luowen" ) print $10 }' | cut -c 2-6 | awk -F: -v hour=0 -v min=0 '{hour+=$1;min+=$2} END {if (min >= 60) {hour+=min/60;min=min%60;} printf("%d hours, %d mins", hour, min)}' 
