#include <stdio.h>
#define rep(i, a, b) for(int i = (a); i < (b); ++i)

int main(){
    int n;
    scanf("%d", &n);
    rep(i, 1, n + 1){
        int x = i;
        if(!(i % 3)){
            printf(" %d", i);
        }else if(i % 10 == 3){
            printf(" %d", i);
        }else{
            while(x > 0){
                x /= 10;
                if(x % 10 == 3){
                    printf(" %d", i);
                    break;
                }
            }
        }
    }

    printf("\n");

    return 0;
}
