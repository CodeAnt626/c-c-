/*************************************************************************
	> File Name: learning/c/day03/5.prime.c
	> Author: luowen
	> Mail: PohZero_Luo@163.com
	> Created Time: Mon 21 Dec 2020 03:57:42 PM CST
 ************************************************************************/

#include<stdio.h>
#define max 1000000
int prime[max + 5];
void init() {
    for (int i = 2; i <= max; i++) {
        if (!prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * i > max) break;
            prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) break;
        }
    }
}
int main() {
    init();
    int m, n;
    scanf("%d%d", &m, &n);
    int cunt = 0;
    for (int i = 1; i <= prime[0]; i++) {
        if (prime[i] >= m && prime[i] <= n) {
            printf("%d\n", prime[i]);
            ++cunt;
        } else if (prime[i] > n) {
            break;
        }
    }
    if (!cunt) {
        printf("0\n");
    }
    return 0;
}
