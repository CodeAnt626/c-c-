/*************************************************************************
	> File Name: isPrimeNumber.c
	> Author: CodeAnt626
	> Mail: PohZero_Luo@163.com
	> Created Time: Sat 07 Nov 2020 11:08:36 PM CST
 ************************************************************************/

// 判定输入的n是否为质数
#include<stdio.h>
#include<math.h>

int main() {
    int n;
    int i;
    scanf("%d", &n);
    if(n == 2 || n == 3){
        printf("YES\n");
        return 0;
    }
    for(i = 2;i < sqrt(n); i++ ){
        if(n % i == 0){
            break;
        }
    }
    if(i > sqrt(n)){
        printf("YES\n");
    }else{
        printf("NO\n");
    }

    return 0;
}
