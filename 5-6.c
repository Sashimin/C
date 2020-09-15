#include <stdio.h>
#define MAX 10010

#if defined(DEBUG)
#include "debug.h"
#endif

int main(void){
    int i, j = 0, n, a[MAX], g[11] = {0};
    printf("人数を入力してください: ");
    do {
        scanf("%d", &n);
        if (n <= 0 || n > MAX){
            printf("1～%dで入力してください: ", MAX);
        }
    } while (n <= 0 || n > MAX);

    printf("%d人の点数を入力してください。\n", n);

    for (i = 0; i < n; i++) {
        printf("No.%d: ", i + 1);
        do {
            scanf("%d", &a[i]);
            if (a[i] < 0 || a[i] > 100){
                printf("1～100で入力してください: ");
            }
        } while (a[i] < 0 || a[i] > 100);
        g[a[i] / 10]++;
    }

    puts("-- 成績分布 --");
    printf("優   : ");
    for (i = 10; i >= 8; i--)
        for (j = 0; j < g[i]; j++)
            putchar('*');
    putchar('\n');
    printf("良   : ");
    for (j = 0; j < g[7]; j++)
        putchar('*');
    putchar('\n');
    printf("可   : ");
    for (j = 0; j < g[6]; j++)
        putchar('*');
    putchar('\n');
    printf("不可 : ");
    for (i = 5; i >= 0; i--)
        for (j = 0; j < g[i]; j++)
            putchar('*');
    putchar('\n');

    return 0;
}
