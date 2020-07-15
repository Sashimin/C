#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i, j, s;
    do {
        printf("大きさを入力してください（奇数のみ）: ");
        scanf("%d", &s);
    } while (~s & 1);

    int mid = s / 2;
    for (i = 0; i < s; i++) {
        int k;
        if(i <= mid) k = i;
        else k = i - 2 * (i - mid);
        for (j = 0; j < s; j++) {
            if (j <= k || j >= s - k - 1) putchar('*');
            else putchar(' ');
        }
        putchar('\n');
    }

    return 0;
}
