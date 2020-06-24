#include <stdio.h>

int main(void){
    int x, i = 0;
    printf("正の整数 : ");
    scanf("%d", &x);

    while(i++ < x){
        if(i & 1) printf("+");
        else printf("-");
    }

    if(x > 0) printf("\n");

    return 0;
}
