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
        for (int j = i; j <= max_n; j += i) {
            prime[j] = 1;
        }
    }
    return ;
}

int main() {
    init();
    int m, n, cunt = 0;
    scanf("%d%d", &m, &n);
    for (int i = m; i <= n; i++) {
        printf("%d\n", prime[i]);
    }
    /*
    for (int i = m; i <= n; i++) {
        if (prime[i] == 0) {
            printf("%d\n", i);
            ++cunt;
        }
    }
    if (!cunt) {
        printf("0\n");
    }
    */
    return 0;
}
