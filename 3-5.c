#include <stdio.h>

int main(void){
    int i = 0, h = 0;
    while(++i){
        int j;
        printf("%d人目の体重は: ", i);
        scanf("%d", &j);
        h += j;
        if(h > 300){
            printf("合計体重が%dkgとなり%dkgオーバーしました.\n", h, h - 300);
            printf("%d人目の人は乗ることができません.\n", i);
            break;
        }
    }

    return 0;
}
