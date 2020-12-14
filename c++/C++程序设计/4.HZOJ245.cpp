/*************************************************************************
	> File Name: 4.HZOJ245.cpp
	> Author: luowen
	> Mail: PohZero_Luo@163.com
	> Created Time: Fri 11 Dec 2020 07:57:16 PM CST
 ************************************************************************/

#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> arr;
    int n, a;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end());
    int p = arr[n / 2], sum = 0;
    for (int i = 0; i < n; i++) {
        sum += abs(arr[i] - p);
    }
    cout << sum << endl;
    return 0;
}
