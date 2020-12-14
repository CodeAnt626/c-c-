/*************************************************************************
	> File Name: 1.max_int.cpp
	> Author: luowen
	> Mail: PohZero_Luo@163.com
	> Created Time: Sat 05 Dec 2020 02:33:18 PM CST
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>
#include <stdarg.h>

int max_int(int n, ...) {
    int ans = INT32_MIN;
    va_list arg;
    va_start(arg, n);
    while (n--) {
        int temp = va_arg(arg, int);
        if (temp > ans) ans = temp;
    }
    va_end(arg);
    return ans;
}

int main() {
    printf("%d\n", max_int(3, 1, 2, 3));
    printf("%d\n", max_int(5, 1, 13, 3, 4, 7));
    printf("%d\n", max_int(5, 1, 13, 3, 4, 7, 21));

    return 0;
}
