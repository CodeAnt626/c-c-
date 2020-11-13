/*************************************************************************
	> File Name: numTri_2.c
	> Author: CodeAnt626
	> Mail: PohZero_Luo@163.com
	> Created Time: Mon 09 Nov 2020 09:15:39 AM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int i, j;
    for(i = 0; i < n; i++) {
        for(j = n - i; j > 0; j--) {
            printf("%d", j);
            if(j != 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

