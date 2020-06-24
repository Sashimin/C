#include <stdio.h>

int main(void){
    int num;

    printf("整数を入力してください: ");
    scanf("%d", &num);

    printf("%05d\n", num);

    return 0;
}
