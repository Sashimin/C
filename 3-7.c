#include <stdio.h>

int main(void){
    int h, a = 0;
    printf("高さは？: ");
    scanf("%d", &h);

    while(a++ < h){
        int w = 0;
        while(w < a){
            printf("%d", w % 10);
            w++;
        }

        printf("\n");
    }

    return 0;
}
