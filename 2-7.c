#include <stdio.h>
#define min(a, b) ((a) < (b) ? (a) : (b))

int main(void){
    int a, b, c;
    printf("aの値を入力してください: ");
    scanf("%d", &a);
    printf("bの値を入力してください: ");
    scanf("%d", &b);
    printf("cの値を入力してください: ");
    scanf("%d", &c);

    printf("最小の値は%dです。\n", min(a, min(b, c)));

    return 0;
}
