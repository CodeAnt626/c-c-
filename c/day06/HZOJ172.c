/*************************************************************************
	> File Name: HZOJ172.c
	> Author: luowen
	> Mail: PohZero_Luo@163.com
	> Created Time: Sat 12 Dec 2020 08:50:15 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX_N 20
#define swap_str(a, b) { \
    char *__temp = (char *)malloc(sizeof(char) * MAX_N); \
    strcpy(__temp, a); \
    strcpy(a, b); \
    strcpy(b, __temp); \
    free(__temp); \
}
void swap_str1(char *str1, char *str2) {
    char *temp = (char *)malloc(sizeof(char) * MAX_N);
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
    free(temp);
}

void insert_sort(char name[][MAX_N + 5], int n) {
    for (int i = 1; i < n; i++) {
        for (int j = i; j >= 1; j--) {
            if (strcmp(name[j], name[j - 1]) > 0) break;
            swap_str1(name[j], name[j - 1]);
        }
    }
    return ;
}

int main() {
    char names[10][MAX_N + 5] = {0};
    for (int i = 0; i < 10; i++) {
        scanf("%s", names[i]);
    }
    insert_sort(names, 10);
    for (int i = 0; i < 10; i++) {
        printf("%s\n", names[i]);
    }
    return 0;
}
