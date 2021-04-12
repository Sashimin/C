#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#if defined(DEBUG)
#include "debug.h"
#endif

int main(void) {
    int sum = 0, x[] = {1, 3, 0, 10, 50, 100, -1};
    int *p, len = sizeof(x) / sizeof(x[0]);

    for (p = x; *p >= 0; p++) {
        sum += *p;
    }

    printf("合計: %d\n", sum);

    return 0;
}

