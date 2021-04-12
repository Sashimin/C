#include <stdio.h>
#include <limits.h>

int main(void) {
    int size;

    size = sizeof(int);
    printf("この処理系ではint型は%dバイトで表現されます。\n", size);
    printf("この処理系でのint型の最小値は%d、最大値は%dです。\n", INT_MIN, INT_MAX);
    printf("この処理系でのunsigned int型の最小値は0、最大値は%uです。\n", UINT_MAX);

    return 0;
}
