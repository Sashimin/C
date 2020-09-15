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

    printf("[");
    for (i = 0; i < NUMBER; i++) {
        printf("%d,", a[i]);
    }
    printf("\b]\n");

    return 0;
}
