/*************************************************************************
	> File Name: spiral_order.c
	> Author: CodeAnt626
	> Mail: PohZero_Luo@163.com
	> Created Time: Wed 11 Nov 2020 07:01:33 PM CST
 ************************************************************************/

// 螺旋输出矩阵

#include<stdio.h>

int main() {
    int matrix[100][100];
    int nums[10000];
    int m, n;
    int i, j;
    scanf("%d%d", &m, &n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int count = 0, left = 0, top = 0, right = n - 1, bottom = m - 1;
    int max = n * m;
    while (count < max) {
        for (i = left; i <= right && count < max; i++) {
            nums[count++] = matrix[top][i];
        }
        top++;
        for (i = top; i <= bottom && count < max; i++) {
            nums[count++] = matrix[i][right];
        }
        right--;
        for (i = right; i >= left && count < max; i--) {
            nums[count++] = matrix[bottom][i];
        }
        bottom--;
        for (i = bottom; i >= top && count < max; i--) {
            nums[count++] = matrix[i][left];
        }
        left++;
    }

    for (i = 0; i < max; i++) {
        printf("%d", nums[i]);
        if (i != n * m - 1) {
            printf(" ");
        }
    } 
    printf("\n");

    return 0;
}
