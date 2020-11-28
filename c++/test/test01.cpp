/*************************************************************************
	> File Name: test01.cpp
	> Author: CodeAnt626
	> Mail: PohZero_Luo@163.com
	> Created Time: Sat 28 Nov 2020 01:56:51 PM CST
 ************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;

double calculate(int num);

int main() {
    int num;
    cin >> num;
    printf("%.1f\n",calculate(num));
    return 0;
}

double calculate(int num) {
    if (num < 0) return -1;
    if (num <= 150) {
        return num * 0.4463;
    } else if (num <= 400) {
        return 150 * 0.4463 + (num - 150) * 0.4663;
    } else {
        return 150 * 0.4463 + 250 * 0.4663 + (num - 400) * 0.5663;
    }
    return 0;
}
