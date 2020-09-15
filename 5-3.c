#include <stdio.h>
#define NUMBER 3

#if defined(DEBUG)
#include "debug.h"
#endif

int main(void){
    int i, a[NUMBER];
    printf("値を%d個入力してください。\n", NUMBER);
    for (i = 0; i < NUMBER; i++) {
        scanf("%d", &a[i]);
    }

    puts("逆順に表示します。");

    for (i = NUMBER - 1; i >= 0; i--) {
        printf("%d\n", a[i]);
    }

    return 0;
}
