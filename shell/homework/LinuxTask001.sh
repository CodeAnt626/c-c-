#!/bin/bash
echo "$(figlet welcome back `whoami`)"
echo -e "\033[0;36m `curl -s "wttr.in/chongqing?format=3"` \033[0m"
echo -e  "\033[0;33m 您最近登录了$(last | grep `whoami` | wc -l)次 \033[0m"
#echo -e "\033[0;33m 上次登录在线时长(hh:mm)`last | grep -v "wtmp begins" | grep -v "reboot" | grep -v "logged in" | cut -c 66- | head -n 1` \033[0m"
echo -e "\033[0;33m 您上次登陆在线时长为`cat /home/luowen/.onlineTime` \033[0m"
echo "`fortune | cowsay`"
