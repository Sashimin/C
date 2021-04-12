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

void swap(char *s, int a, int b) {
    char tmp = *(s + a);
    *(s + a) = *(s + b);
    *(s + b) = tmp;
}

void reverse(char *s) {
    int mid = strlen(s) / 2;
    char *p = s;

    while (p < s + mid) {
        int index = p - s;
        swap(s, index, strlen(s) - index - 1);
        p++;
    }
}

int main(void) {
    char s[100];
    
    printf("文字列は？:");
    scanf("%s", s);

    reverse(s);

    puts(s);

    return 0;
}

