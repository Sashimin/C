#include <stdio.h>

int main(void){
    int i, c = 0, n;
    printf("何の倍数をスキップしますか？: ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++){
        if(!(i % n)) continue;
        printf("%d ", i);
        c++;
    }
    putchar('\n');

    printf("全部で%dの数値を出力しました。\n", c);

    return 0;
}
