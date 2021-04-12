#include <stdio.h>

int main(void) {
    int n;

    printf("10進数の整数を入力してください: ");
    scanf("%d", &n);
    printf("10進数の%dは8進数で%o、16進数で%Xです。\n", n, n, n);
    
    return 0;
}
