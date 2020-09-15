#include <stdio.h>

int main(void){
    int s, x, y, nx, ny, n = 1, v[15][15] = {0};
    do{
        printf("辺の長さを入力してください（3～15の奇数）: ");
        scanf("%d", &s);
    } while (~s & 1 || s < 3 || s > 15);
    x = s / 2, y = 0;

    while(n <= s * s){
        v[y][x] = n++;
        nx = x + 1, ny = y - 1;
        if(nx >= s) nx = 0;
        if(ny < 0) ny = s - 1;
        if(v[ny][nx]){
            y++;
        }else{
            x = nx, y = ny;
        }
    }

    for (y = 0; y < s; y++) {
        for (x = 0; x < s; x++) {
            printf("%4d", v[y][x]);
        }
        putchar('\n');
    }

    return 0;
}
