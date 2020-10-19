#include <stdio.h>

void hello(int x) {
    while (x--) {
        puts("Hello!");
    }
}

int main(void) {
    int x;
    printf("How many times? : ");
    scanf("%d", &x);
    hello(x);
}
