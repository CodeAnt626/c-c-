/*************************************************************************
	> File Name: numTri.c
	> Author: CodeAnt626
	> Mail: PohZero_Luo@163.com
	> Created Time: Mon 09 Nov 2020 09:07:45 AM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int i, j;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n - i; j++) {
            printf("%d", i + 1);
            if(j != n - i - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
