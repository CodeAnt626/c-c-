/*************************************************************************
	> File Name: string.cpp
	> Author: CodeAnt626
	> Mail: PohZero_Luo@163.com
	> Created Time: Fri 20 Nov 2020 09:21:18 PM CST
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
    cin >> input;
    cout << input << endl;
    cout << input.length() << endl;
    cout << input[0] << endl;
    string str = "yangzhou301";
    auto result = input + str;
    cout << result << endl;
    cout << (result < str) << endl;

    return 0;
}
