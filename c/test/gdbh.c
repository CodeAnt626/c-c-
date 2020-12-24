/*************************************************************************
	> File Name: gdbh.c
	> Author: luowen
	> Mail: PohZero_Luo@163.com
	> Created Time: Mon 21 Dec 2020 04:49:29 PM CST
 ************************************************************************/

#include<stdio.h>
#define max 20000

int prime[max + 5];

void init() {
    unsigned int cunt = 0;
    for (int i = 2; i <= max; i++) {
        if (!prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * i > max) break;
            prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) break;
        }
    }
}

int serch(int n) {
    int size = prime[0];
    for (int i = 1; i <= prime[0]; i++) {
        if (i == prime[0]) return prime[i];
        if (prime[i] < n && prime[i + 1] > n) {
            return i;
        }
    }
}

int main() {
    int n, n1 = 0, n2 = 0, n3 = 0;
    int flag = 0;
    init();
    scanf("%d", &n);
    int index = serch(n);
    n1 = prime[index];
    while(n1 + n2 + n3 != n) {
        int num = n - n1;
        for (int i = 1; i <= prime[0]; i++) {
            n3 = prime[i];
            for (int j = 1; j <= prime[0]; j++) {
                n2 = prime[i];
                if (n2 + n3 == num) break;
            }
            if (n2 + n3 == num) {
                flag = 1;
                break;   
            }
        }
        if (flag == 1) break;
        else
            n1 = prime[--index];

    }
    printf("%d %d %d\n", n3, n2, n1);
    return 0;
}
