#include <stdio.h>
#include <math.h>

#if defined(DEBUG)
#include "debug.h"
#endif

int main(void){
    int i, j, a[5][3];

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            a[i][j] = pow(i + 1, j + 1);
        }
    }

    puts("各要素の値を確認します");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            printf("%5d", a[i][j]);
        }
        putchar('\n');
    }

    return 0;
}
