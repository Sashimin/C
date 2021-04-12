#include <stdio.h>

int main(void) {
    int x = 5, *p = &x;

    printf("xのアドレス: %p\n", &x);
    printf("p: %p\n", p);
    printf("*p: %d\n", *p);

    return 0;
}
