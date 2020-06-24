#include <stdio.h>
#define rep(i, a, b) for(int i = (a); i < (b); ++i)

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d %d %.10f\n", a / b, a % b, (double)a / (double)b);

    return 0;
}
