/*************************************************************************
	> File Name: matrix.c
	> Author: CodeAnt626
	> Mail: PohZero_Luo@163.com
	> Created Time: Wed 11 Nov 2020 04:51:07 PM CST
 ************************************************************************/

/* 每次程序运行时，首先在第一行输入 2 个整数，分别对应题目描述中的 m 和 n（1≤m,n≤100），两个整数之间用一个空格分隔。
 *
 * 接下来输入 m 行，每行包含 n 个整数，每两个整数之间用一个空格分隔。
 *
 * 接下来输入一行，输入一个整数为1或0。当输入为1时对矩阵进行水平翻转；当输入为0时对矩阵进行竖直翻转。
 *
 * 输出包括 m 行，每行包含 n 个整数，按要求输出翻转后的矩阵，每行任意两个整数之间用一个空格分隔，每行最后一个整数后面没有空格。
* */

#include <stdio.h>

int main() {
    int matrix[100][100];
    int m;
    int n;
    int i, j;
    int flag;
    scanf("%d%d", &m, &n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    scanf("%d", &flag);
    if (flag) {
    	for (i = 0; i < m; i++) {
        	for (j = n - 1; j >= 0; j--) {
            	printf("%d", matrix[i][j]);
	            if (j != 0) {
    	            printf(" ");
        	    }
	        }
    	    printf("\n");
	    }
    } else {
        for (i = m - 1; i >= 0; i--) {
            for (j = 0; j < n; j++) {
                printf("%d", matrix[i][j]);
                if (j != n - 1) {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }

    return 0;
}
