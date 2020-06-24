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
        rep(y, 0, A[i]){
            rep(x, 0, B[i]){
                if(y & 1){
                    if(x & 1) printf("#");
                    else printf(".");
                }else{
                    if(~x & 1) printf("#");
                    else printf(".");
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
