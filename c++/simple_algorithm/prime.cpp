/*************************************************************************
	> File Name: prime.cpp
	> Author: CodeAnt626
	> Mail: PohZero_Luo@163.com
	> Created Time: Sat 21 Nov 2020 01:13:16 PM CST
 ************************************************************************/

// 输出指定范围内的素数

#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int n = 1000000;
int mark[1000001];

int main() {
    int c;
    memset(mark, 0, sizeof(mark));
    mark[0] = 1;
    mark[1] = 1;
    int n, m;
    scanf("%d%d", &n, &m);

    for (c = 2; c * c <= n; c++) {
        if (mark[c] == 0) {
            for (int i = 2 * c; i <= n; i += c) {
                mark[i] = 1;
            }
        }
    }
    
    for (c = m; c <= n; c++) {
        if (mark[c] == 0) {
            printf("%d\n", c);
        }
    }

    return 0;
}
