#include <stdio.h>

int main(void){
    int a, b;
    printf("整数A : ");
    scanf("%d", &a);
    printf("整数B : ");
    scanf("%d", &b);

    if(a > b) puts("AはBより大きいです。");
    else if(a < b) puts("BはAより大きいです。");
    else puts("AとBは等しいです。");

    return 0;
}
