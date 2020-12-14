/*************************************************************************
	> File Name: 2.my_printf.cpp
	> Author: luowen
	> Mail: PohZero_Luo@163.com
	> Created Time: Sat 05 Dec 2020 03:05:57 PM CST
 ************************************************************************/
#include <stdio.h>
#include <stdarg.h>
#include <inttypes.h>

int reverse_num(int x, int *temp) {
    int digit = 0;
    do {
        digit++;
        *temp = *temp * 10 + x % 10;
        x /= 10;
    } while (x);
    return digit;
}

int output_num(int num, int digit) {
    int cnt = 0;
    while (digit--) {
        putchar(num % 10 + '0');
        ++cnt;
        num /= 10;
    }
    return cnt;
}

int my_printf(const char *frm, ...) {
    int cnt = 0;
    va_list arg;
    va_start(arg, frm);
    #define PUTC(a) putchar(a), ++cnt
    for (int i = 0; frm[i]; i++) {
        switch (frm[i]) {
            case '%': {
                switch (frm[++i]) {
                    case '%': PUTC(frm[i]); break;
                    case 'd': {
                        int x = va_arg(arg, int);
                        uint32_t xx = 0;
                        if (x < 0) PUTC('-'), xx = -x;
                        else xx = x;
                        int x1 = xx / 100000, x2 = xx % 100000;
                        int temp1=0, temp2=0;
                        int digit1 = reverse_num(x1, &temp1);
                        int digit2 = reverse_num(x2, &temp2);
                        int digit3 = 0;
                        if (x1) digit3 = 5 - digit2;
                        else digit1 = 0;
                        cnt += output_num(temp1, digit1);
                        cnt += output_num(0, digit3);
                        cnt += output_num(temp2, digit2);
                    } break;
                    case 's': {
                        const char *str = va_arg(arg, const char *);
                        for (int i = 0; str[i]; i++) {
                            PUTC(str[i]);
                        }
                    }break;
                } break;
            }
            default : PUTC(frm[i]);
        }
    }
    #undef PUTC
    va_end(arg);
    return cnt;
}

int main() {
    int a = 123, n;
    printf("hello world\n");
    my_printf("hello world\n");
    printf("int (a) = %d\n", a);
    my_printf("int (a) = %d\n", a);
    printf("int (a) = %d\n", 0);
    my_printf("int (a) = %d\n", 0);
    printf("int (a) = %d\n", 1000);
    my_printf("int (a) = %d\n", 1000);
    printf("int (a) = %d\n", -123);
    my_printf("int (a) = %d\n", -123);
    printf("INT32_MAX = %d\n", INT32_MAX);
    my_printf("INT32_MAX = %d\n", INT32_MAX);
    printf("INT32_MIN = %d\n", INT32_MIN);
    my_printf("INT32_MIN = %d\n", INT32_MIN);
    printf("int (100500) = %d\n", 100500);
    my_printf("int (100500) = %d\n", 100500);
    char str[] = "I love China";
    printf("str = %s\n", str);
    my_printf("str = %s\n", str);
    while (~scanf("%d", &n)) {
        printf(" has %d digits!\n", printf("%d", n));
        my_printf(" has %d digits!\n", my_printf("%d", n));
    }
    return 0;
}
