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

void gethead(char *s, int len) {
    if (strlen(s) < len) return;

    *(s + len) = 0;
}

int main(void) {
    char s[100];
    int x;

    printf("文字列は？:");
    scanf("%s", s);
    printf("文字数は？:");
    scanf("%d", &x);

    gethead(s, x);

    puts(s);

    return 0;
}

