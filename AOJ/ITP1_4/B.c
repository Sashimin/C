#include <stdio.h>
#include <math.h>
#define rep(i, a, b) for(int i = (a); i < (b); ++i)

double dpow(double r, int n){
    double a = r;
    rep(i, 0, n - 1) a *= r;
    return a;
}

int main(){
    double r;
    scanf("%lf", &r);
    printf("%.6f %.6f\n", dpow(r, 2) * acos(-1), r * 2 * acos(-1));

    return 0;
}
