/*************************************************************************
	> File Name: 3.NewTon.cpp
	> Author: luowen
	> Mail: PohZero_Luo@163.com
	> Created Time: Tue 08 Dec 2020 08:47:46 PM CST
 ************************************************************************/

// 求解x*x - n = 0
#include <stdio.h>
#include <math.h>

double func(double x, double n) {
    return x * x - n;
}
double f(double x) {
    return 2 * x;
}

double NewTon(double (*F)(double, double), double (*f)(double), double n) {
    double x = n / 2.0;
    #define EPSL 1e-7
    while (fabs(F(x, n)) > EPSL) {
        x -= F(x, n) / f(x);
    }
    #undef EPSL
    return x;
}
double my_sqrt(double n) {
    return NewTon(func, f, n);
}

int main() {
    double n;
    while (~scanf("%lf", &n)) {
        printf("sqrt(%g) = %g\n", n, sqrt(n));
        printf("my_sqrt(%g) = %g\n", n, my_sqrt(n));
    }
    return 0;
}
