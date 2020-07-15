#include <stdio.h>

int main(void){
    int i, n, ans = 1;
    printf("整数を入力してください: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
        ans *= i;
        if(i < n){
            printf("* ");
        }else{
            printf("= %d", ans);
        }
    }
    putchar('\n');

    return 0;
}
