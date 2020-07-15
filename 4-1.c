#include <stdio.h>

int main(void){
    int n;
    printf("整数を入力してください: ");
    scanf("%d", &n);

    for (; n > 0; n--) {
        putchar('#');
    }
    putchar('\n');

    return 0;
}
