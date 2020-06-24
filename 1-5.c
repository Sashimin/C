#include <stdio.h>

int main(void){
    int num;

    printf("整数を入力してください : ");
    scanf("%d", &num);

    printf("その数の5倍は%dです。\n", 5 * num);

    return 0;
}
