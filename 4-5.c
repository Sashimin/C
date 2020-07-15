#include <stdio.h>

int main(void){
    int a, b, i;
    printf("何個出力しますか？: ");
    scanf("%d", &a);
    printf("何個ごとに改行しますか？: ");
    scanf("%d", &b);

    for (i = 1; i <= a; i++) {
        putchar('#');
        if(!(i % b)){
            putchar('\n');
        }
    }

    if(a % b) putchar('\n');

    return 0;
}
