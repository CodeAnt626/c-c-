/*************************************************************************
	> File Name: 2.my_sqrt.cpp
	> Author: luowen
	> Mail: PohZero_Luo@163.com
	> Created Time: Tue 08 Dec 2020 07:34:02 PM CST
 ************************************************************************/

#include <stdio.h>
#include <math.h>

double func(double x) {
    return x * x;
}
double my_sqrt(double (*arr)(double), double n) {
    double head = 0, tail = n, mid;
    if (n < 1.0) tail = 1.0;
    if (n < 0) return -1;
    #define EPSL 1e-7
    while (tail - head > EPSL) {
        mid = (head + tail) / 2.0;
        if (arr(mid) < n) head = mid;
        else tail = mid;
    }
    #undef EPSL
    return head;
}

int main() {
    double n;
    while (~scanf("%lf", &n)) {
        printf("my_sqrt(%g) = %g\n", n, my_sqrt(func, n));
        printf("sqrt(%g) = %g\n", n, sqrt(n));
    }
    return 0;
}
