#include <stdio.h>
#define rep(i, a, b) for(int i = (a); i < (b); ++i)

// 動作環境 : C++14 AOJ
int main(){
    int W, H, x, y, r;
    scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);
    if(x - r >= 0 && r + x <= W && y - r >= 0 && y + r <= H) puts("Yes");
    else puts("No");

    return 0;
}
