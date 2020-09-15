#include <stdio.h>

#if defined(DEBUG)
#include "debug.h"
#endif

int main(void){
    int i, j, a[4][3], total[2];
    float n_avg[4], avg[2];

    for (i = 0; i < 4; i++) {
        printf("No.%dの国語の点数は: ", i + 1);
        scanf("%d", &a[i][0]);
        printf("No.%dの数学の点数は: ", i + 1);
        scanf("%d", &a[i][1]);
        a[i][2] = a[i][0] + a[i][1];
        n_avg[i] = (a[i][0] + a[i][1]) / 2.0;
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 2; j++) {
            total[j] += a[i][j];
            avg[j] += a[i][j];
        }
    }

    for (i = 0; i < 2; i++) avg[i] /= 4;

    puts("      国語 数学 合計  平均");
    for (i = 0; i < 4; i++) {
        printf("No.%2d ", i + 1);
        for (j = 0; j < 3; j++) {
            printf("%4d ", a[i][j]);
        }
        printf(" %.1f\n", n_avg[i]);
    }

    printf("合計: %4d %4d\n", total[0], total[1]);
    printf("平均: %4.1f %4.1f\n", avg[0], avg[1]);

    return 0;
}
