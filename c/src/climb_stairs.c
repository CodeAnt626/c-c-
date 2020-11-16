/*************************************************************************
	> File Name: climb_stairs.c
	> Author: CodeAnt626
	> Mail: PohZero_Luo@163.com
	> Created Time: Tue 10 Nov 2020 12:58:13 PM CST
 ************************************************************************/

// 爬梯子， 一次只能爬2阶或3阶
// 输入n(n >= 2)
// 输出总共有多少总方式

#include<stdio.h>

int climb_stairs(int n);

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", climb_stairs(n));
    
    return 0;
}

int climb_stairs(int n) {
    if (n == 2 || n == 3 || n == 4) {
        return 1;
    }
    return climb_stairs(n - 2) + climb_stairs(n - 3);
}
