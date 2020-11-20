/*************************************************************************
	> File Name: sieve.cpp
	> Author: CodeAnt626
	> Mail: PohZero_Luo@163.com
	> Created Time: Fri 20 Nov 2020 09:39:52 PM CST
 ************************************************************************/

// 筛法列举质数

#include <cstdio>

int main() {
    int n = 15;
    int mark[16] = {
        1, 1, 0, 0,
        0, 0, 0, 0,
        0, 0, 0, 0,
        0, 0, 0, 0
    };
    int c;
    int j;

    for (c = 2; c * c <= n; c++) {
		if (mark[c] != 1) {
            for (j = 2; j <= n / c; j++) {
                mark[c * j] = 1;
            }
        }
    }
    for (c = 2; c <= n; c++) {
        if (mark[c] != 1) {
            printf("%d\n", c);
        }
    }

    return 0;
}
