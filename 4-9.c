#include <stdio.h>

int main(void){
    int i, n;
    printf("値を入力してください: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d", i);
        if(!(i % 3)){
            putchar('!');
        }else{
            int j = i;
            while(j > 0){
                int k = j % 10;
                j /= 10;
                if(k == 3){
                    putchar('!');
                    break;
                }
            }
        }
        putchar(' ');
    }
    putchar('\n');

    return 0;
}
