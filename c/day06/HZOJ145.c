/*************************************************************************
	> File Name: HZOJ145.c
	> Author: luowen
	> Mail: PohZero_Luo@163.com
	> Created Time: Sat 12 Dec 2020 08:32:51 PM CST
 ************************************************************************/

#include<stdio.h>
#include <string.h>

#define MAX_N 100

int main() {
    int n, len = 0;
    char str[MAX_N + 5];
    char result[MAX_N + 5];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", str);
        if (len > strlen(str)) continue;
        strcpy(result, str);
        len = strlen(str);
    }
    printf("%s\n", result);
    return 0;
}
