#include <stdio.h>

int main(void){
    int i, a[5] = {1, -3, 15, 200, -20};

    for (int i = 0; i < 5; i++) {
        a[i] *= 3;
    }

    for (int i = 0; i < 5; i++) {
        printf("%4d", a[i]);
    }
    putchar('\n');

    return 0;
}
