#include <stdio.h>

#if defined(DEBUG)
#include "debug.h"
#endif

int main(void){
    int i, j, a[9][9] = {0};

    for (i = 0; i < 9; i++) {
        a[i][i] = i + 1;
    }

    puts("各要素の値を確認します");
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            printf("%5d", a[i][j]);
        }
        putchar('\n');
    }

    return 0;
}
