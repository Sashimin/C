#include <stdio.h>

int main(void){
    int a, b, c, cnt = 0;
    printf("aの値を入力してください: ");
    scanf("%d", &a);
    printf("bの値を入力してください: ");
    scanf("%d", &b);
    printf("cの値を入力してください: ");
    scanf("%d", &c);

    if(a < 0) cnt++;
    if(b < 0) cnt++;
    if(c < 0) cnt++;

    if(cnt > 0) puts("負の値が1つ以上あります。");
    else puts("すべて0以上の値です。");

    return 0;
}
