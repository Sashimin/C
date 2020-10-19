#include <stdio.h>

void show(int v[], int len) {
    int i;
    for (i = 0; i < len; i++) {
        printf("%d番目の要素: %d\n", i, v[i]);
    }
}

void adjust(int v[], int len) {
    int i;
    for (i = 0; i < len; i++) {
        v[i] = v[i] / 10 * 10;
    }
}

int main(void) {
    int x[5] = {12, 3, 129, 5011, 12123};
    puts("<初期状態>");
    show(x, 5);
    adjust(x, 5);
    puts("<adjust 呼び出し後>");
    show(x, 5);
    return 0;
}
