/*************************************************************************
	> File Name: binary_search.c
	> Author: CodeAnt626
	> Mail: PohZero_Luo@163.com
	> Created Time: Mon 09 Nov 2020 04:38:26 PM CST
 ************************************************************************/

// 折半查找的实现

#include<stdio.h>

int binary_search(int numbers[], int n, int m);

int main() {
    int n;
    int k;
    int numbers[1000001];
    int m;
    int i;
    int j;

    // 反复读入数字和查找数字的数量
    while (scanf("%d%d", &n, &k) != EOF) {
        
        // 读入给定的数字
        for (i = 0; i < n; i++) {
            scanf("%d", &numbers[i]);
        }

        for (j = 0; j < k; j++) {
            // 读入待查找的数字，
            scanf("%d", &m);

            // 请在下面完成查找读入数字的功能
            printf("%d", binary_search(numbers, n, m) + 1);
            if (j != k - 1) {
                printf(" ");
            }

        }

    }
    return 0;
}

int binary_search(int numbers[], int n, int m) {
    int left = 0;
    int right = n - 1;
    int mid;
    while (left <= right) {
        mid = (left + right) / 2;
        if (numbers[mid] == m) {
            return mid;
        } else if (numbers[mid] < m) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}
