#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#if defined(DEBUG)
#include "debug.h"
#endif

#define max(a, b) a > b ? a : b
#define min(a, b) a < b ? a : b

void delnumchars(char *s) {
    char *p = s;
    
    while (*p) {
        if (!('0' <= *p && *p <= '9')) {
            *(s++) = *p;
        }
        p++;
    }

    *s = '\0';
}

int main(void) {
    char s[] = "abc123DE45";

    printf("元の文字列は%sです。\n", s);
    delnumchars(s);

    printf("数値を削除した文字列は%sです。\n", s);

    return 0;
}

