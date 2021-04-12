#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#if defined(DEBUG)
#include "debug.h"
#endif

#define max(a, b) a > b ? a : b
#define min(a, b) a < b ? a : b

void hidechars(char *s) {
    char *p = s;
    while (*p) {
        if (!((p - s) % 2)) {
            *p = '_';
        }
        p++;
    }
}

int main(void) {
    char words[100];
    
    printf("単語を入力してください: ");
    scanf("%s", words);

    hidechars(words);

    puts("hidechars実行後:");
    puts(words);

    return 0;
}

