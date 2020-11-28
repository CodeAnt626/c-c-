/*************************************************************************
	> File Name: test02.cpp
	> Author: CodeAnt626
	> Mail: PohZero_Luo@163.com
	> Created Time: Sat 28 Nov 2020 02:12:10 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int buy(double money);

int main() {
    int a, b;
    double money;
    cin >> a >> b;
    money = a + b / 10.0;
    cout << buy(money) << endl;
    return 0;
}

int buy(double money) {
    const double price = 1.9;
    int count = 0;
    while (money > price) {
        money -= price;
        count++;
    }
    return count;
}
