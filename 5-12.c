#include <stdio.h>
#include <limits.h>
#define max(m, n) (m) > (n) ? (m) : (n)
#define min(m, n) (m) < (n) ? (m) : (n)

#if defined(DEBUG)
#include "debug.h"
#endif

int main(void){
    int i, j, mx = INT_MIN, mn = INT_MAX, a[4][4];

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%5d", a[i][j]);
            mn = min(mn, a[i][j]);
            mx = max(mx, a[i][j]);
        }
        putchar('\n');
    }
    printf("max: %d\n", mx);
    printf("min: %d\n", mn);

    return 0;
}
