#include <stdio.h>

int main(void){
    int a = 10, b = 4;
    printf("a の評価値: %d\n", a);
    printf("b の評価値: %d\n", b);
    printf("a/3 + b の評価値: %d\n", a / 3 + b);
    printf("a==10 の評価値: %d\n", a == 10);
    printf("a!=10 の評価値: %d\n", a != 10);
    printf("a>b の評価値: %d\n", a > b);
    printf("a==10 && b==10の評価値: %d\n", a == 10 && b == 10);
    printf("a<5 || b<5 の評価値: %d\n", a < 5 || b < 5);

    return 0;
}
