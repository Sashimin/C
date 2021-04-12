#include <stdio.h>

void topower(int *p, int y) {
    int a = 1;
    while (y--) {
        a *= *p;
    }
    *p = a;
}

int main(void) {
    int x, y;
    
    printf("2つの整数値を入力してください: ");
    scanf("%d %d", &x, &y);
    topower(&x, y);
    printf("%d\n", x);

    return 0;
}
