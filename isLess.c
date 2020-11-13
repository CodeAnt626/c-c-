/*************************************************************************
	> File Name: isLess.c
	> Author: CodeAnt626
	> Mail: PohZero_Luo@163.com
	> Created Time: Mon 09 Nov 2020 08:38:45 AM CST
 ************************************************************************/

// 输出比输入的数小的质数
#include<stdio.h>
#include<math.h>

int main()
{
    int N;      // 作为输入的整整数
    scanf("%d", &N);
    printf("%d\n", 2);
    int i, j;
    for(i = 3;i <= N; i++){
        for(j = 2; j < sqrt(i); j++){
            if(i % j == 0){
                break;
            }
        }
        if(j > sqrt(i)){
            printf("%d\n", i);
        }
    }

    return 0;
}
