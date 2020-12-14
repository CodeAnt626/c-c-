/*************************************************************************
	> File Name: 1.arry.cpp
	> Author: luowen
	> Mail: PohZero_Luo@163.com
	> Created Time: Fri 11 Dec 2020 02:27:16 PM CST
 ************************************************************************/
#include<stdio.h>
#define max_n 100

void func(int (*num)[4][3]) {
    printf("num = %p, num + 1 = %p\n", num, num + 1);
    return ;
}

int main() {
    int arr[2][4][3] = {0}, n;
    char str[max_n + 5] = {0};
    printf("sizeof(arr) = %lu\n", sizeof(arr));
    printf("arr = %p, &arr[0] = %p\n", arr, &arr[0]);
    printf("arr + 1 = %p\n", arr + 1);
    printf("str = %p, str + 1 = %p\n", str, str + 1);
    n = 0;
    func(arr);
    int **num;
    printf("num = %p, num + 1 = %p\n", num, num + 1);
    printf("n = %d\n", n);
    return 0;
}
