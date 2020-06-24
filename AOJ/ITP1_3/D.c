#include <stdio.h>
#define rep(i, a, b) for(int i = (a); i < (b); ++i)

int main(){
    int a, b, c, ans = 0;
    scanf("%d %d %d", &a, &b, &c);
    rep(i, a, b + 1){
        if(!(c % i)) ans++;
    }

    printf("%d\n", ans);

    return 0;
}
