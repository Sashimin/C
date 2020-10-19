#include <stdio.h>

int main(void){
    int n, i = 0;
    scanf("%d", &n);

    while(i++ < n){
        int j = 0;
        while(j++ < n){
            if((i & 1 && j & 1) || (~i & 1 && ~j & 1)){
                putchar('#');
            }else{
                putchar('.');
            }
        }
        putchar('\n');
    }

    return 0;
}
