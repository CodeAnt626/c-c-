/*************************************************************************
	> File Name: 1.fac.c
	> Author: luowen
	> Mail: PohZero_Luo@163.com
	> Created Time: Tue 01 Dec 2020 07:21:35 PM CST
 ************************************************************************/

// 随堂练习：读入n， 计算n的阶乘

#include<stdio.h>

unsigned long fac(int);

int main() {
    int n;
    while(~scanf("%d", &n)) {
        if (n < 0) {
            printf("输入错误！！！\n");
            continue;
        }
        printf("%d!=%lu\n", n, fac(n));
    }
    return 0;
}

unsigned long fac(int num) {
    if (num == 0) return 1;
    if (num == 1) {
        return 1;
    }
    return num * fac(num - 1);
}
