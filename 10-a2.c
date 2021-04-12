#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#if defined(DEBUG)
#include "debug.h"
#endif

#define max(a, b) a > b ? a : b
#define min(a, b) a < b ? a : b


void swap(int *p1, int *p2) {
    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

void sort3(int *p1, int *p2, int *p3) {
    if (*p1 > *p2) swap(p1, p2);
    if (*p2 > *p3) swap(p2, p3);
    if (*p1 > *p2) swap(p1, p2);
}

int main(void) {
    int x, y, z;

    scanf("%d %d %d", &x, &y, &z);
    sort3(&x, &y, &z);

    printf("%d %d %d\n", x, y, z);

    return 0;
}

