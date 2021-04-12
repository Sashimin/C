#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

#if defined(DEBUG)
#include "debug.h"
#endif

#define max(a, b) a > b ? a : b
#define min(a, b) a < b ? a : b

void convstr(char *s) {
    char let, *p = s;
    int list[10010][2] = {};
    int i, cnt = 0;

    while (*p) {
        if ((p - s) & 1) {
            int num = *p - '0';
            list[cnt][0] = let;
            list[cnt][1] = num;
        } else {
            let = *p;
            cnt++;
        }
        p++;
    }

    for (i = 0; i <= cnt; i++) {
        char c = list[i][0];
        int num = list[i][1];

        while (num--) {
            *s = c;
            *s++;
        }
    }

    *s = '\0';
}

int main(void) {
    char s[10010];

    scanf("%s", s);
    convstr(s);
    puts(s);

    return 0;
}
