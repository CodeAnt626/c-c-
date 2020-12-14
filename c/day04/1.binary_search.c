/*************************************************************************
	> File Name: 1.binary_search.c
	> Author: luowen
	> Mail: PohZero_Luo@163.com
	> Created Time: Tue 08 Dec 2020 06:35:22 PM CST
 ************************************************************************/

#include<stdio.h>

int binary_search(int (*arr)(int), int x, int n) {
    int begin = 0, end = n -1, mid;
    while (begin <= end) {
        mid = (begin + end) >> 1;
        if (arr(mid) == x) return mid;
        if (arr(mid) > x) end = mid - 1;
        else begin = mid + 1;
    }
    return -1;
}

int func(int x) {
    return x * x;
}

int main() {
    int arr[100] = {0};
    int n, x;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        arr[i] = i * i;
    }
    while (~scanf("%d", &x)) {
        printf("%d\n", binary_search(func, x, n));
    }
    return 0;
}
