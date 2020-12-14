/*************************************************************************
	> File Name: 1.gcd.c
	> Author: luowen
	> Mail: PohZero_Luo@163.com
	> Created Time: Thu 03 Dec 2020 07:23:33 PM CST
 ************************************************************************/

#include <stdio.h>

int gcd(int a, int b) {
    return (b ? gcd(b, a % b) : a);
}

int main() {
    int a, b;
    while(~scanf("%d%d", &a, &b)) {
        printf("gcd(%d, %d) = %d\n", a, b, gcd(a, b));
    }
    return 0;
}
