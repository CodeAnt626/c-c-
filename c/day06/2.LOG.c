/*************************************************************************
	> File Name: 2.LOG.c
	> Author: luowen
	> Mail: PohZero_Luo@163.com
	> Created Time: Sat 12 Dec 2020 04:08:59 PM CST
 ************************************************************************/

#include<stdio.h>

#ifdef DEBUG
#define LOG(frm, args...) { \
    printf("\033[0;33m[%s --> %s : %d] \033[0m", __FILE__, __func__, __LINE__); \
    printf(frm, ##args); \
}
#else
#define LOG(frm, args...)
#endif

#define contact(a, b) a##b

int main() {
    int a = 123, abc, def;
    int abcdef = 0;
    LOG("hello\n");
    LOG("%d\n", a);
    contact(abc, def) = 234;
    LOG("abcdef = %d\n", abcdef);
    return 0;
}
