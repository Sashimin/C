#include <stdio.h>
#define rep(i, a, b) for(int i = (a); i < (b); ++i)

int main(){
    int A[10000], B[10000], count = 0;
    while(1){
        int H, W;
        scanf("%d %d", &H, &W);
        if(H == 0 && W == 0) break;
        A[count] = H;
        B[count] = W;
        count++;
    }

    rep(i, 0, count){
        rep(j, 0, B[i]) printf("#");
        printf("\n");
        rep(y, 1, A[i] - 1){
            printf("#");
            rep(x, 0, B[i] - 2) printf(".");
            printf("#\n");
        }
        rep(j, 0, B[i]) printf("#");
        printf("\n\n");
    }

    return 0;
}
