#include <stdio.h>

int main(void){
    int x, i = 2;
    printf("正の整数 : ");
    scanf("%d", &x);

    while(i <= x){
        int j = 2, flag = 1;
        while(j < i){
            if(!(i % j)){
                flag = 0;
                break;
            }
            j++;
        }
        if(flag) printf("%d ", i);
        i++;
    }

    printf("\n");

    return 0;
}
