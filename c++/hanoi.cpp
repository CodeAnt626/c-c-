/*************************************************************************
	> File Name: hanoi.cpp
	> Author: CodeAnt626
	> Mail: PohZero_Luo@163.com
	> Created Time: Sat 14 Nov 2020 08:51:54 PM CST
 ************************************************************************/

// 求解汉诺塔问题

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void hanoi(int, char, char, char);

int main() {
    int n;
    cin >> n;
    hanoi(n, 'A', 'B', 'C');
    return 0;
}

void hanoi(int n, char a, char b, char c) {
    if (n == 1) {
        cout << a << "-->" << c << endl;
        return;
    }
    hanoi(n - 1, a, c, b);
    cout << a << "-->" << c << endl;
    hanoi(n - 1, b, a, c);
}
