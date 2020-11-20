/*************************************************************************
	> File Name: matrix_vector.cpp
	> Author: CodeAnt626
	> Mail: PohZero_Luo@163.com
	> Created Time: Fri 20 Nov 2020 05:11:35 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m;
    int n;
    cin>>m>>n;
    vector< vector<int> > matrix_a(m);
    vector< vector<int> > matrix_b(n);
	int input;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> input;
            matrix_a[i].push_back(input);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> input;
            matrix_b[i].push_back(input);
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
        	int s = 0;
            for (int k = 0; k < n; k++) {
                s += matrix_a[i][k] * matrix_b[k][j];
            }
            if (j != 0) {
                cout << " ";
            }
            cout << s;
    	}
        cout << endl;
    }

    return 0;
}
