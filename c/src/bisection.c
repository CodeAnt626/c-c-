/*************************************************************************
	> File Name: bisection.c
	> Author: CodeAnt626
	> Mail: PohZero_Luo@163.com
	> Created Time: Mon 09 Nov 2020 02:36:32 PM CST
 ************************************************************************/

// 二分法求方程近似解

#include <stdio.h>
#include <math.h>
#define EPSILON 1e-7

double bisection(int p, int q, double (*func)(int, int, double));
double f(int p, int q, double x);
int main() {
    int p;
    int q;
    scanf("%d%d", &p, &q);
    printf("%.4f\n", bisection(p, q, f));
    return 0;
}

double bisection(int p, int q, double (*func)(int, int, double)) {
    double a = -20.0;
    double b = 20.0;
    double m = (a + b) / 2;
    while(1){
        if(fabs(func(p, q, m)) > EPSILON) {
            if(func(p, q, m) * func(p, q, a) <= 0) {
                b = m;
            }else if(func(p, q, m) * func(p, q, b) <= 0){
                a = m;
            }
        }else {
            return m;
        }
        m = (a + b) / 2;
    }
    return 0;
}

double f(int p, int q, double x) {
    return p * x + q;
}
