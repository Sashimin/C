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

int ismul3(char *s) {
    int sum = 0;

    while (*s) {
        sum += *s - '0';
        s++;
    }

    return !(sum % 3);
}

int main(void) {
    char s[100];

    printf("Input number: ");
    scanf("%s", s);

    if(ismul3(s)) puts("3の倍数です.");
    else puts("3の倍数ではありません.");

    return 0;
}

