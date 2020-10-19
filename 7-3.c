#include <stdio.h>

double power(double x, int n) {
    if (n > 0) return x * power(x, n - 1);
    else return 1;
}

int main(void) {
    double x;
    int n;
    puts("実数xと整数nを入力してください.");
    printf("実数x: ");
    scanf("%lf", &x);
    printf("整数n: ");
    scanf("%d", &n);
    printf("%.6fの%d乗は, %.6fです.\n", x, n, power(x, n));
}
