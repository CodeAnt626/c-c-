/*************************************************************************
	> File Name: new_hash.c
	> Author: CodeAnt626
	> Mail: PohZero_Luo@163.com
	> Created Time: Thu 12 Nov 2020 08:55:14 PM CST
 ************************************************************************/

/*
 * 小明设计了一个哈希函数，将一个长度为 k 的字符串转成个长度为 32 的字符串。
 *
 * 声明一个长度为 32 的数组 arr，并将其中元素全部初始化为 0。
 *
 * 取出每一位的 ASCII 值，将长度为 k 的字符串中第 i 位的 ASCII 码加入到 arr[i % 32] 中（1≤i≤k）。
 *
 * 声明一个长度为 32 的数组 bits，令 bits[j] 为 arr[31 - j] 与 arr[j] << 1 的值进行了按位异或运算后得到的结果（0≤j≤31）。
 *
 * 计算出 bits[j] % 85 + 34 并将该十进制数在 ASCII 码中对应的字符输出到结果字符串的第 j+1 位（0≤j≤31）。
 *
 * 输入为一行，包括一个长度为 k 的字符串（32 < k < 500），这个字符串由大写字母、小写字母和数字组成（不含空格）。
 *
 * 输出为一行，为一个长度为 32 的字符串哈希结果
 *
 */

#include <stdio.h>
#include <string.h>

int main() {
    int arr[33];
    memset(arr, 0, sizeof(arr));
    char str[505];
    char result[33];
    scanf("%s", str);
    int i;
    for (i = 0; i < strlen(str); i++) {
        arr[(i + 1) % 32] += str[i];
    }
    int bits[33];
    int j;
    for (j = 0; j < 32; j++) {
        bits[j] = (arr[31 - j]) ^ (arr[j] << 1);
    }
    for (j = 0; j < 32; j++) {
        result[j] = bits[j] % 85 + 34;
    }
    printf("%s", result);
    return 0;
}
