#include <stdio.h>
#define PI 3.1415

int main(){
    double h, r;
    printf("円柱の高さを入力してください: ");
    scanf("%lf", &h);
    printf("底面の半径を入力してください: ");
    scanf("%lf", &r);
    printf("円柱の定積は約%.2fです.\n", r * r * PI * h);

    return 0;
}
