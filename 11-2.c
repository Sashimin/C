#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#if defined(DEBUG)
#include "debug.h"
#endif

#define max(a, b) a > b ? a : b
#define min(a, b) a < b ? a : b

int main(void) {
    char s[100];
    char *ptr = s;
    int cnt = 0;

    scanf("%s", s);

    while (*ptr) {
        if ('0' <= *ptr && *ptr <= '9') cnt++;
        ptr++;
    }

    printf("数値は%d個含まれています。\n", cnt);

    return 0;
}

