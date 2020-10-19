#include <stdio.h>

int factorial(int x) {
    if (x > 1) return x * factorial(x - 1);
    else return x;
}

int main(void) {
    int x;

    printf("整数を入力してください: ");
    scanf("%d", &x);
    printf("%dの階乗は%dです.\n", x, factorial(x));

    return 0;
}
