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

double distance(int pt1, int pt2, struct point pts[]) {
    double dist = sqrt(pow((double)(pts[pt2].x - pts[pt1].x), 2) + pow((double)(pts[pt2].y - pts[pt1].y), 2));

    return dist;
}

int main(void) {
    int i, pt1, pt2;
    struct point pts[4];

    for (i = 0; i < sizeof(pts) / sizeof(pts[0]); i++) {
        printf("点%d: ", i);
        scanf("%d,%d", &pts[i].x, &pts[i].y); 
    }

    printf("2つの点を指定してください: ");
    scanf("%d %d", &pt1, &pt2);

    printf("点%dと点%dの距離は%.2fです.\n", pt1, pt2, distance(pt1, pt2, pts));

    return 0;
}

