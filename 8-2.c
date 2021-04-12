#include <stdio.h>

int main(void) {
    int n;

    printf("16進数の整数を入力してください: ");
    scanf("%X", &n);
    printf("16進数の%Xは10進数で%dです。\n", n, n);

    return 0;
}
