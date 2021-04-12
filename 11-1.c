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
    char word[80];
    char *p = word;
    int count = 0;
    
    printf("単語を入力してください: ");
    scanf("%s", word);
    
    while (*p) {
        if (*p == 'a') count++;
        p++;
    }

    printf("文字aは%d文字含まれています。\n", count);

    return 0;
}

