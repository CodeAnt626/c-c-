/*************************************************************************
	> File Name: 4.prime.cpp
	> Author: luowen
	> Mail: PohZero_Luo@163.com
	> Created Time: Sat 05 Dec 2020 08:36:04 PM CST
 ************************************************************************/
#include <stdio.h>
#define max_n 1000000

int prime[max_n + 5];
void init() {
    for (int i = 2; i <= max_n; i++) {
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * i > max_n) break;
            prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) break;
        }
    }
}

int main() {
    init();
    for (int i = 2; i <= 10; i++) {
        if (prime[i] != 1)
            printf("%d\n", prime[i]);
    }
    return 0;
}
