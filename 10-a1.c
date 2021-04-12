#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#if defined(DEBUG)
#include "debug.h"
#endif

const int days[] = {
    31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
};

int getnextday(int month, int day, int *nmonth, int *nday) {
    if (day < 1 || day > days[month - 1]) return -1;

    if (1 <= month && month <= 12) {
        *nmonth = month;
        *nday = day + 1;

        if (*nday > days[*nmonth - 1]) {
            *nday = 1;
            *nmonth += 1;
            if (*nmonth > 12) *nmonth = 1;
        }

        return 0;
    }

    return -1;
}

int main(void) {
    int m, d, nm, nd, ret;
    
    while (1) {
        printf("日付を入力してください: ");
        scanf("%d/%d", &m, &d);

        ret = getnextday(m, d, &nm, &nd);

        if (ret) puts("不正な値です。");
        else printf("翌日は%d月%d日です。\n", nm, nd);
    }

    return 0;
}

