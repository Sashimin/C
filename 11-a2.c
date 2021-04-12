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

void strtolower(char *s) {
    while (*s) {
        if ('A' <= *s && *s <= 'Z') {
            *s += 'a' - 'A';
        }
        s++;
    }
}

int ispalindrome(char *s) {
    char *front = s, *back = s + strlen(s) - 1;
    strtolower(s);

    while (*front) {
        while (*front == ' ') front++;
        while (*back == ' ') back--;
        
        if (*front != *back) return 0;

        front++;
        back--;
    }

    return 1;
}

int main(void) {
    char s[1000];
    char *p = s;

    printf("文字列は？: ");

    fgets(s, 1000, stdin);
    scanf("%[\n]", s);
    *(p + strlen(s) - 1) = '\0';

    if (ispalindrome(s)) puts("回文です.");
    else puts("回文ではありません.");

    return 0;
}

