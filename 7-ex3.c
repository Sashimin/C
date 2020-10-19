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
    int i, W[10], K[10], wrank[3], krank[3], wscore = 0, kscore = 0;
    for (i = 0; i < 10; i++) scanf("%d", &W[i]);
    for (i = 0; i < 10; i++) scanf("%d", &K[i]);
    
    getrank(W, wrank);
    getrank(K, krank);
    

    for (i = 0; i < 3; i++) {
        wscore += wrank[i];
        kscore += krank[i];
    }

    printf("%d %d\n", wscore, kscore);

    return 0;
}
