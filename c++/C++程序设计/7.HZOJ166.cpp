/*************************************************************************
	> File Name: 7.HZOJ166.cpp
	> Author: luowen
	> Mail: PohZero_Luo@163.com
	> Created Time: Fri 11 Dec 2020 08:34:36 PM CST
 ************************************************************************/

#include<iostream>
#include <string>
using namespace std;

int main() {
    string sa, sb;
    int ind;
    cin >> sa >> ind >> sb;
    if (sa.size() > 100) cout << 100 << endl;
    else cout << sa.size() << endl;
    sa.insert(ind - 1, sb);
    cout << sa << endl;

    return 0;
}
