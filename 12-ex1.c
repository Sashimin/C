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

#define P_MAX 5

struct point {
    int x;
    int y;
};

void draw(struct point pt[], int size) {
    int i, j, k;

    for (i = 9; i >= 0; i--) {
        for (j = 0; j < 10; j++) {
            int flag = 0, num = -1;
            for (k = 0; k < size; k++) {
                if (pt[k].x == j && pt[k].y == i) {
                    flag = 1;
                    num = k;
                }
            }
            if (flag) {
                putchar(num + '0');
            } else {
                if (j == 0) {
                    if (i == 0) {
                        putchar('+');
                    } else {
                        putchar('|');
                    }
                    continue;
                }
                if (i == 0) {
                    putchar('-');
                    continue;
                }
                putchar(' ');
            }
        }
        putchar('\n');
    }
}

double distance(struct point pt1, struct point pt2) {
    double dist = sqrt(pow((double)(pt2.x - pt1.x), 2) + pow((double)(pt2.y - pt1.y), 2));

    return dist;
}

double getNearestDiff(int target, struct point pt[], int size) {
    int i;
    double diff = 10000;

    for (i = 0; i < size; i++) {
        if (i == target) continue;
        diff = min(diff, distance(pt[target], pt[i]));
    }

    return diff;
}

int main(void) {
    struct point pt[P_MAX];
    int i, j, k;

    for (i = 0; i < P_MAX; i++) {
        printf("点%dの座標を入力してください: ", i);
        scanf("%d,%d", &pt[i].x, &pt[i].y);
        draw(pt, i + 1);
        for (j = 0; j <= i; j++) {
            printf("点%d: (%d, %d)", j, pt[j].x, pt[j].y);

            if (i > 0) {
                int near[1000], index = 0;
                double diff = getNearestDiff(j, pt, i + 1);
                // printf(" %.2f", diff);
                for (k = 0; k <= i; k++) {
                    if (distance(pt[j], pt[k]) == diff) {
                        if (j == k) continue;
                        near[index++] = k;
                    }
                }

                printf(" 一番近い点:");

                for (k = 0; k < index; k++) {
                    printf(" 点%d", near[k]);
                }
            }

            putchar('\n');
        }
        putchar('\n');
    }

    return 0;
}
