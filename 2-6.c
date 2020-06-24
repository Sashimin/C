#include <stdio.h>

int main(void){
    int a, b, c, cnt = 0;
    printf("aの値を入力してください: ");
    scanf("%d", &a);
    printf("bの値を入力してください: ");
    scanf("%d", &b);
    printf("cの値を入力してください: ");
    scanf("%d", &c);

    if(a == b) cnt++;
    if(b == c) cnt++;
    if(a == c) cnt++;

    if(cnt >= 2) puts("すべて等しい値です。");
    else if(cnt >= 1) puts("値が等しい組が1つあります。");
    else puts("すべて異なる値です。");

    return 0;
}
