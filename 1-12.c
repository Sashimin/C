#include <stdio.h>

int main(void){
    int a;
    printf("整数を入力してください: ");
    scanf("%d", &a);
    puts("符号を反転します。");
    printf("%d\n", -a);

    return 0;
}
