#include <stdio.h>

int main(void){
    int i, j, n;
    printf("辺の長さ: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if(i > j) putchar(' ');
            else putchar('*');
        }
        putchar('\n');
    }

    return 0;
}
