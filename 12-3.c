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

int main(void) {
    struct point pt1, pt2;

    printf("点1(x, y): ");
    scanf("%d,%d", &pt1.x, &pt1.y);
    printf("点2(x, y): ");
    scanf("%d,%d", &pt2.x, &pt2.y);

    double dist = sqrt(pow((double)(pt2.x - pt1.x), 2) + pow((double)(pt2.y - pt1.y), 2)); 

    printf("2点間の距離は%.2fです.\n", dist);

    return 0;
}

