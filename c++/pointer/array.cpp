/*************************************************************************
	> File Name: array.cpp
	> Author: CodeAnt626
	> Mail: PohZero_Luo@163.com
	> Created Time: Sat 21 Nov 2020 09:01:06 PM CST
 ************************************************************************/

// 使用模板定义的array类

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

template<class T>
class Array{
public:
    Array(int n):size(n), length(0) {
        array = new T[n];
    }
    ~Array() {
        delete[] array;
    }
    void showAll() {
        for (int i = 0; i < size; i++) {
            cout << array[i] << endl;
        }
    }
    void insert(T tar) {
        if (length < size) {
            array[length++] = tar;
        }
        else {
            cout << "array full" << endl;
        }
    }

private:
    T *array;
    int size;
    int length;
};

int main() {
    string str1="yangzhou301";
    Array<char> arr1(str1.length());
    for(auto c:str1)
    {
        arr1.insert(c);
    }
    arr1.showAll();
    int num[]={1,9,2,6,0,8,1,7};
    Array<int>arr2(sizeof(num)/sizeof(int));
    for(auto c:num)
    {
        arr2.insert(c);
    }
	arr2.showAll();
    arr2.insert(301);
    return 0;
}

