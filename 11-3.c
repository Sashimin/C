#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#if defined(DEBUG)
#include "debug.h"
#endif

#define max(a, b) a > b ? a : b
#define min(a, b) a < b ? a : b

void swapchar(char *s, int d1, int d2) {
    char tmp = *(s + d1);
    *(s + d1) = *(s + d2);
    *(s + d2) = tmp;
}

int main(void) {
    char s[] = "hamster";
    puts(s);
    swapchar(s, 2, 5);
    puts(s);

    return 0;
}

