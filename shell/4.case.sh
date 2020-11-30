#!/bin/bash

# 一般用来做菜单
read a
case $a in
    1)
        echo 1
        ;;
    2)
        echo 2
        ;;
    default)
        echo "Not Found"
        ;;
esac
