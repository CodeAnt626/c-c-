/*************************************************************************
	> File Name: 2.strlen.cpp
	> Author: luowen
	> Mail: PohZero_Luo@163.com
	> Created Time: Fri 11 Dec 2020 06:55:27 PM CST
 ************************************************************************/

#include<iostream>
#include <string.h>
#include <string>
using namespace std;

int main() {
    string s = "0";
    for (int i = 0; i < 10000; i++) {
        s += "0";
    }
    cout << clock() << endl;
    for (int i = 0; i < 50000; i++){
        strlen(s.c_str());
    }
    cout << clock() << endl;
    for (int i = 0; i < 50000; i++){
        s.length();
    }
    cout << clock() << endl;
    s = "hello kaikeba";
    for (int i = 0; s[i]; i++) {
        cout << s[i] << endl;
    }
    return 0;
}
