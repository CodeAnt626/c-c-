/*************************************************************************
	> File Name: 3.prime.cpp
	> Author: luowen
	> Mail: PohZero_Luo@163.com
	> Created Time: Sat 05 Dec 2020 07:27:51 PM CST
 ************************************************************************/
#include <stdio.h>

#define max_n 10000

int prime[max_n + 5] = {0};
void init() {
    for (int i = 2; i <= max_n; i++) {
        if (prime[i]) continue;
        prime[++prime[0]] = i;
        for (int j = i * i; j <= max_n; j += i) {
            prime[j] = 1;
        }
    }
    return ;
}

int main() {
    init();
    /*
    for (int i = 1; i <= prime[0]; i++) {
        printf("%d\n", prime[i]);
    }
    */
    printf("prime[0] = %d\n", prime[0]);
    return 0;
}
