#include <stdio.h>

int main(void){
    int num;

    printf("整数を入力してください : ");
    scanf("%d", &num);

    printf("%dに12を加えると%dです。\n", num, num + 12);

    return 0;
}

    
