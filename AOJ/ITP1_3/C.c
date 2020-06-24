#include <stdio.h>
#define rep(i, a, b) for(int i = (a); i < (b); ++i)

int main(){
    int A[3000], B[3000], count = 0;
    while(1){
        int x, y;
        scanf("%d %d", &x, &y);
        if(x == 0 && y == 0) break;
        A[count] = x;
        B[count] = y;
        count++;
    }

    rep(i, 0, count){
        if(A[i] > B[i]) printf("%d %d\n", B[i], A[i]);
        else printf("%d %d\n", A[i], B[i]);
    }

    return 0;
}
