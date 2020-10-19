#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int r1, r2, ans, c = 0, i = 0;
    srand((unsigned)time(NULL));

    while(i++ < 10){
        r1 = rand() % 90 + 10;
        r2 = rand() % 90 + 10;

        if(i & 1) printf("%d + %d : ", r1, r2);
        else printf("%d - %d : ", r1, r2);

        scanf("%d", &ans);

        if((i & 1 && ans == r1 + r2) || (~i & 1 && ans == r1  - r2)){
            c++;
        }else{
            if(i & 1) printf("残念！正解は%dでした.\n", r1 + r2);
            else printf("残念！正解は%dでした.\n", r1 - r2);
            printf("計%d問正解です.\n", c);
            break;
        }
    }

    if(c == 10) puts("おめでとう！");

    return 0;
}
