#include <stdio.h>
#include <string.h>

int getrank(int x[], int rank[]) {
    int i, j;
    for (i = 0; i < 10; i++) {
        for (j = 9; j > i; j--) {
            if (x[j] > x[j - 1]) {
                int tmp = x[j];
                x[j] = x[j - 1];
                x[j - 1] = tmp;
            }
        }
    }
    memcpy(rank, x, sizeof(int) * 3);
}

int main(void) {
    int x[10] = {1, 5, 4, 3, 3, 8, 12, 3, 4, -4};
    int rank[3];
    getrank(x, rank);
    printf("%d %d %d\n", rank[0], rank[1], rank[2]);
}
