/*************************************************************************
	> File Name: 4.string.c
	> Author: luowen
	> Mail: PohZero_Luo@163.com
	> Created Time: Sat 12 Dec 2020 08:09:36 PM CST
 ************************************************************************/
#include<stdio.h>
#include <string.h>

int main() {
    char ch[4];
    int n;
    while(~scanf("%s%d", ch, &n)) {
        printf("ch = %c, n = %d\n", ch[0], n);
    }
    return 0;
    char str[11] = {0};
    while (~scanf("%d", &n)) {
        sprintf(str, "%X", n);
        printf("%s has %lu digits!\n", str, strlen(str));
    }
    return 0;
}
