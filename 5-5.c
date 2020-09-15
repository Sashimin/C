#include <stdio.h>
#include <limits.h>
#define MAX 10
#define max(m, n) (m) > (n) ? (m) : (n)
#define min(m, n) (m) < (n) ? (m) : (n)

#if defined(DEBUG)
#include "debug.h"
#endif

int main(void){
    int i, s, mx = INT_MIN, mn = INT_MAX, a[MAX];
    printf("何個のデータを入力しますか？（最大10）: ");
    scanf("%d", &s);

    for (i = 0; i < s; i++) {
        printf("No.%2d: ", i + 1);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < s; i++) {
        mx = max(mx, a[i]);
        mn = min(mn, a[i]);
    }

    printf("最大値は%dで、最小値は%dです。\n", mx, mn);

    return 0;
}
