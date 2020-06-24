#include <stdio.h>

int main(void){
    int h;
    printf("身長（cm）を入力してください: ");
    scanf("%d", &h);
    double m = (double)h / 100;
    printf("標準体重は%.1fkgです.\n", m * m * 22);

    return 0;
}
