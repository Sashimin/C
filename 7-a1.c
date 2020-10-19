#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int powint(int x, int n) {
    if (n > 0) return x * powint(x, n - 1);
    else return 1;
}

int myrand(int n) {
    if (n >= 1 && n <= 5) {
        return powint(10, n - 1) + rand() % (powint(10, n) - powint(10, n - 1));
    }
    return -1;
}

int main(void) {
    int n;
    srand((unsigned)time(NULL));
    for (n = 1; n <= 5; n++) {
        printf("%d\n", myrand(n));
    }
}
