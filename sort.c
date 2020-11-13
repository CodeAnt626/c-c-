/*************************************************************************
	> File Name: sort.c
	> Author: CodeAnt626
	> Mail: PohZero_Luo@163.com
	> Created Time: Tue 10 Nov 2020 09:23:39 PM CST
 ************************************************************************/

#include <stdio.h>

void swap(int *a, int *b);

int main() {
    int n = 10;
    int numbers[10];
    int i;
	int j;

    // 读入给定的数字
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
/*
// 冒泡排序
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i; j++) {
            if (numbers[j] < numbers[j + 1]) {
                swap(&numbers[j], &numbers[j + 1]);
            }
        }
    }
*/

// 选择排序
	int max = 0;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (numbers[max] < numbers[j]) {
                max = j;
            }
        }
        swap(&numbers[max], &numbers[i]);
		max = i + 1;
    }
    
    for (i = 0; i < n; i++) {
        printf("%d", numbers[i]);
        if (i != n - 1) {
            printf(" ");
        } else {
            printf("\n");
        }
    }

    return 0;
}

void swap(int *a, int *b) {
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
