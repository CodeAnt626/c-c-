/*************************************************************************
	> File Name: 1.MAX.c
	> Author: luowen
	> Mail: PohZero_Luo@163.com
	> Created Time: Sat 12 Dec 2020 02:58:04 PM CST
 ************************************************************************/

#include<stdio.h>

#define MAX(a, b) ({ \
    __typeof(a) __a = (a); \
    __typeof(b) __b = (b); \
    __a > __b ? __a : __b; \
})

#define P(func) { \
    printf("%s = %d\n", #func, func); \
}

int main() {
    int a = 7;
    P(MAX(2, 3));
    P(5 + MAX(2, 3));
    P(MAX(2, MAX(3, 4)));
    P(MAX(2, 3 > 4 ? 3 : 4));
    P(MAX(a++, 6));
    P(a);
    return 0;
}
