#include <stdio.h>
#include <limits.h>
#define MAX 10010
#define max(m, n) (m) > (n) ? (m) : (n)

#if defined(DEBUG)
#include "debug.h"
#endif

int main(void){
    int i, j = 0, mx = INT_MIN, n, a[MAX];
    double avg = 0;
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
        mx = max(mx, a[i]);
        avg += a[i];
    }
    avg /= n;

    puts("-- 成績分布 --");
    char *s[4] = {"優", "良", "可", "不可"};
    for (i = 0; i < 4; i++) {
        printf("%-5s : ", s[i]);
        for (j = 0; j < n; j++) {
            switch(i){
                case 0:
                    if(a[j] >= 80) printf("%2d", j + 1);
                    break;
                case 1:
                    if(a[j] >= 70 && a[j] < 80) printf("%2d", j + 1);
                    break;
                case 2:
                    if(a[j] >= 60 && a[j] < 70) printf("%2d", j + 1);
                    break;
                case 3:
                    if(a[j] < 60) printf("%2d", j + 1);
                    break;
            }
        }
        printf("\b\n");
    }
    puts("-----");
    printf("最高点: %d点\n", mx);
    printf("平均点: %.1f点\n", avg);

    return 0;
}
