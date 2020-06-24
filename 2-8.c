#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int r1, r2, r3, cnt = 0;
    srand((unsigned)time(NULL));
    r1 = rand() % 9 + 1;
    r2 = rand() % 9 + 1;
    r3 = rand() % 9 + 1;
    if(r1 == r2) cnt++;
    if(r2 == r3) cnt++;
    if(r1 == r3) cnt++;
    printf("%d %d %d\n", r1, r2, r3);

    if(cnt >= 2) puts("BINGO!!");
    else if(cnt == 1) puts("One pair!");
    else puts("No pair..");
}
