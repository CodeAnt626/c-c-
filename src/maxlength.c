/*************************************************************************
	> File Name: test.c
	> Author: CodeAnt626
	> Mail: PohZero_Luo@163.com
	> Created Time: Thu 12 Nov 2020 12:20:13 PM CST
 ************************************************************************/

/*
 * 一个班级中有n个学生，每个学生有一个名字。班主任希望知道学生中名字最长（名字中的一个空格长度计为1）的学生是谁。
 */
#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    char names[120];
    char tmp[120];
    int i = 0, j = 0;
    for (i = 0; i < n; i++) {
        while(scanf("%c", &tmp[j]) != EOF && tmp[j] != '\n') {
            j++;
        }
        j = 0;
        if (strlen(names) < strlen(tmp)) {
            strcpy(names, tmp);
        }
    }
    printf("%s", names);
	
    
    return 0;
}
