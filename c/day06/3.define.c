/*************************************************************************
	> File Name: 3.define.c
	> Author: luowen
	> Mail: PohZero_Luo@163.com
	> Created Time: Sat 12 Dec 2020 06:26:00 PM CST
 ************************************************************************/

#include<stdio.h>

#define COLOR(a, b) "\033[" #b "m" a "\033[0m"

#define RED(a) COLOR(a, 31)
#define GREEN(a) COLOR(a, 32)

__attribute__((constructor))
int add(int a, int b) {
    printf(RED("add : %d\n"), __LINE__);
    return a + b;
}

int main() {
    printf(GREEN("main : %d\n"), __LINE__);
    add(2, 3);
    return 0;
}
