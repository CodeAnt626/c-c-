/*************************************************************************
	> File Name: int.c
	> Author: luowen
	> Mail: PohZero_Luo@163.com
	> Created Time: Mon 21 Dec 2020 05:33:12 PM CST
 ************************************************************************/

#include<stdio.h>

union num {
    unsigned int n;
    struct {
        unsigned short n1;
        unsigned short n2;
    } nums;
};

int main() {
    union num num1;
    scanf("%u", &num1.n);
    unsigned temp = num1.nums.n1;
    num1.nums.n1 = num1.nums.n2;
    num1.nums.n2 = temp;
    printf("%u\n", num1.n);
   
    return 0;
}
