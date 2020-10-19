#include <stdio.h>

int getmul3num(int v[], int len) {
    int cnt = 0;
    while (len--) {
        if (v[len] % 3 == 0) {
            cnt++;
        }
    }
    return cnt;
}

int main(void) {
    int x[6] = {10, 8, 3, 14, 15, 26};

    printf("3の倍数の値は %d個含まれています．\n", getmul3num(x, 6));

    return 0;
}
