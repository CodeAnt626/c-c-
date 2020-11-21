/*************************************************************************
	> File Name: binary_search.cpp
	> Author: CodeAnt626
	> Mail: PohZero_Luo@163.com
	> Created Time: Sat 21 Nov 2020 01:44:48 PM CST
 ************************************************************************/

// 折半查找(二分查找)

#include <cstdio>
#include <iostream>
using namespace std;

int binary_search(int num[], int size, int tar);

int main() {
    int n;
    int k;
    int numbers[1000001];
    int m;
    int i, j;

    // 反复读入数字和查找数字的数量
    while (scanf("%d %d", &n, &k) != EOF) {
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

int binary_search(int num[], int size, int tar) {
    int l = 0;
    int r = size - 1;
    int mid;
    while (l <= r) {
        mid = (l + r) / 2;
        if (num[mid] == tar) {
            return mid;
        }
        if (num[mid] > tar) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return -1;
}
