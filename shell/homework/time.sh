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
