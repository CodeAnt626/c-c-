/*************************************************************************
	> File Name: modify_permissions.c
	> Author: CodeAnt626
	> Mail: PohZero_Luo@163.com
	> Created Time: Thu 12 Nov 2020 05:19:54 PM CST
 ************************************************************************/

/*
 * 到文件当前的权限和希望添加或删除的权限（如果已经对存在/不存在的权限添加/删除则不做改变）。你需要输出最终改变后的权限的十进制描述。
 *
 * 存储表现为三个二进制位 0，如果可读则第一位会变成 1、如果可写则第二位会变成 1、如果可执行则第三位会变成 1。
 *
 * */

#include <stdio.h>
int init(char *str);
int stoi(char *str, int now);
int main() {
    char pow[5];
    char command[5];
    scanf("%s", pow);
    int res;
    res = init(pow);
    while(scanf("%s", command) != EOF) {
        res = stoi(command, res);
    }
    printf("%d", res);

    return 0;
}
int init(char *str) {
    int res = 0;
    int i;
    for (i = 0; i < 3; i++) {
        switch (str[i]) {
            case 'r': res = res | 4; break;
            case 'w': res = res | 2; break;
            case 'x': res = res | 1; break;
        }
    }
    return res;
}
int stoi(char *str, int now){
    int res = now;
    int i;
    if (str[0] == '+') {
        for (i = 1; i < 4 && str[i] != 0; i++) {
            switch (str[i]) {
                case 'r': res = res | 4; break;
                case 'w': res = res | 2; break;
                case 'x': res = res | 1; break;
            }
        }
    } else if (str[0] == '-') {
        for (i = 1; i < 4 && str[i] != 0; i++) {
            switch (str[i]) {
                case 'r': res = res & 3; break;
                case 'w': res = res & 5; break;
                case 'x': res = res & 6; break;
            }
        }
    } else {
        return 0;
    }
    return res;
}
