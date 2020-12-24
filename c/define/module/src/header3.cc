#include "header1.h"
#include <stdio.h>

void funcD(int a, int b) {
    printf("Capetain Luo : %d\n", a + b);
    funcA(a);
    return ;
}
