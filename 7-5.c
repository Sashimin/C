#include <stdio.h>

int min3(int a, int b, int c) {
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;

    return min;
}

int main(void) {
    int num[3], i;
    puts("3つの整数を入力してください.");
    for (i = 0; i < 3; i++) {
        printf("整数 %d: ", i + 1);
        scanf("%d", &num[i]);
    }
    printf("最小値は%dです.\n", min3(num[0], num[1], num[2]));
}
