/*************************************************************************
	> File Name: mysum.cpp
	> Author: luowen
	> Mail: PohZero_Luo@163.com
	> Created Time: Sat 12 Dec 2020 10:01:49 PM CST
 ************************************************************************/

#include<iostream>

int main() {
    int sum = 0, value = 0;
    // 读取数据直到遇到文件尾，计算所有读入的值的和
    while (std::cin >> value)
        sum += value;
    std::cout << "Sum is: " << sum << std::endl;
    return 0;
}
