/*************************************************************************
	> File Name: gcd_and_lcm.c
	> Author: CodeAnt626
	> Mail: PohZero_Luo@163.com
	> Created Time: Wed 11 Nov 2020 07:50:13 PM CST
 ************************************************************************/

#include<stdio.h>

int gcd(int n, int m) {
    return m ? gcd(m, n % m) : n;
}
int lcm(int n, int m) {
    return n * m / gcd(n, m);
}

int main() {
    printf("%d\n", gcd(12, 33));
    printf("%d\n", lcm(12, 33));
}
