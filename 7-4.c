#include <stdio.h>

int factorial(int x) {
    if (x > 1) return x * factorial(x - 1);
    else return x;
}

int factsum(int n) {
    int ans = 0;
    for (; n > 0; n--) {
        ans += factorial(n);
    }
    return ans;
}

int main(void) {
    int n;
    printf("Input n: ");
    scanf("%d", &n);
    printf("%d\n", factsum(n));
}
