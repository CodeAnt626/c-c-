/*************************************************************************
	> File Name: multiplicationTable.c
	> Author: CodeAnt626
	> Mail: PohZero_Luo@163.com
	> Created Time: Mon 09 Nov 2020 09:28:44 AM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int i, j;
    for(i = 1; i <= n; i++) {
        for(j = i; j <= n; j++) {
            printf("%d*%d=%d", i, j, i * j);
            if(j != n) {
                printf("\t");
            }
        }
        printf("\n");
    }

    return 0;
}
