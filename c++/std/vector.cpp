/*************************************************************************
	> File Name: vector.cpp
	> Author: CodeAnt626
	> Mail: PohZero_Luo@163.com
	> Created Time: Fri 20 Nov 2020 06:58:54 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> num;
    int input;
    while (cin >> input) {
        auto iter=find(num.begin(), num.end(), input);
        if (iter == num.end()) {
            num.push_back(input);
        }
    }
    sort(num.begin(), num.end(), greater<int>());
    
    for (int i = 0; i < num.size(); i++) {
        cout << num[i] << endl;
    }
    cout << num.size();
    return 0;
}
