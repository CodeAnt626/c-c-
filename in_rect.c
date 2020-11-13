/*************************************************************************
	> File Name: in_rect.c
	> Author: CodeAnt626
	> Mail: PohZero_Luo@163.com
	> Created Time: Thu 12 Nov 2020 10:27:42 PM CST
 ************************************************************************/

#include <stdio.h>
#include <math.h>

struct point {
    int x;
    int y;
};
struct rectangle {
    struct point p1;
    struct point p2;
};

int main() {
    struct point target;
    struct rectangle rect;
    scanf("%d%d", &target.x, &target.y);
    scanf("%d%d%d%d", &rect.p1.x, &rect.p1.y, &rect.p2.x, &rect.p2.y);
    int max_x = rect.p1.x > rect.p2.x ? rect.p1.x : rect.p2.x;
    int min_x = rect.p1.x < rect.p2.x ? rect.p1.x : rect.p2.x;
    int max_y = rect.p1.y > rect.p2.y ? rect.p1.y : rect.p2.y;
    int min_y = rect.p1.y < rect.p2.y ? rect.p1.y : rect.p2.y;
    if (target.x >= min_x && target.x <= max_x && target.y >= min_y && target.y <= max_y) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}

