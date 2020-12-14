/*************************************************************************
	> File Name: 5.HZOJ245.cpp
	> Author: luowen
	> Mail: PohZero_Luo@163.com
	> Created Time: Fri 11 Dec 2020 07:57:16 PM CST
 ************************************************************************/

#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define MAX_N 100000
int arr[MAX_N + 5];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    nth_element(arr, arr + (n / 2), arr + n);
    int p = arr[n / 2], sum = 0;
    for (int i = 0; i < n; i++) {
        sum += abs(arr[i] - p);
    }
    cout << sum << endl;
    return 0;
}
