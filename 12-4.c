#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

#if defined(DEBUG)
#include "debug.h"
#endif

#define max(a, b) a > b ? a : b
#define min(a, b) a < b ? a : b

struct point {
    int x;
    int y;
};

void xyswap(struct point *p) {
    int tmp = p->x;
    p->x = p->y;
    p->y = tmp;
}

int main(void) {
    struct point pt;

    printf("点: ");
    scanf("%d,%d", &pt.x, &pt.y);
    printf("(%d, %d)\n", pt.x, pt.y);

    puts("xとyを入れ替えます");
    xyswap(&pt);
    
    printf("(%d, %d)\n", pt.x, pt.y);

    return 0;
}

