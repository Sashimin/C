#include <stdio.h>

int main(void){
    int x, keta = 0;
    printf("整数を入力してください: ");
    scanf("%d", &x);

    while(x > 0){
        x /= 10;
        keta++;
    }

    printf("%d\n", keta);

    return 0;
}
