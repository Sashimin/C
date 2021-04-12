#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#if defined(DEBUG)
#include "debug.h"
#endif

double calcavg(int *v, int n) {
    double sum = 0;
    int *p;

    for (p = v; p < v + n; p++) {
        sum += *p;
    }

    return sum / n;
}

int main(void) {
    int x[] = {10, 8, 11, 20};

    printf("%.2f\n", calcavg(x, 4));
    printf("%.2f\n", calcavg(x, 2));

    return 0;
}

