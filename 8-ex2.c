#include <stdio.h>
#include <string.h>

int main(void) {
    int i, j, n = 0, score[10][3] = {};
    char t[10];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%c", &t[i]);

        if (t[i] == '\n') {
            i--;
            continue;
        }

        for (j = 0; j < n - 1; j++) {
            int k;
            scanf("%d", &k);
            score[i][k]++;
        }
    }

    int rank[sizeof(char)][3];
    for (i = 0; i < n; i++) {
        memcpy(rank[t[i]], score[i], sizeof(score[i]) * 3);
    }

    printf("%d", rank['g'][1]);

    return 0;
}
