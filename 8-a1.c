#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0

int to_bits(unsigned short n, int arr[]) {
    int i = 0;

    while (n != 0) {
        arr[i++] = n % 2;
        n /= 2;
    }

    return i; 
}

int main(void) {
    int n, flag, arr[sizeof(short) * 8];
    
    do {
        printf("10進数の整数を入力してください: ");
        scanf("%d", &n);

        if (0 <= n && n <= 65535) {
            flag = true;
        } else {
            puts("0から65535までの値のみ受け付けます。");
            flag = false;
        }
    } while (!flag);

    int i = to_bits(n, arr) - 1;

    for (; i >= 0; i--) {
        printf("%d", arr[i]);
    }
    putchar('\n');
    
    return 0;
}
