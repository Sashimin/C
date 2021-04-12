#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#if defined(DEBUG)
#include "debug.h"
#endif

#define max(a, b) a > b ? a : b
#define min(a, b) a < b ? a : b

int getmax(int *v, int n) {
    int *p, mx = *v;

    for (p = v; p < v + n; p++) {
        mx = max(mx, *p);
    }

    return mx;
}

int main(void) {
    int x[] = {10, 8, 11, 20};
    int y[] = {-10, -8, -11, -20};

    printf("%d\n", getmax(x, 4));
    printf("%d\n", getmax(y, 3));

    return 0;
}

