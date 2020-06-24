#include <stdio.h>

int main(void){
    int x;
    printf("値を入力 : ");
    scanf("%d", &x);

    if(10 <= x && x <= 99) puts("2桁の数字です。");
    else puts("2桁の数字ではありません。");

    return 0;
}
