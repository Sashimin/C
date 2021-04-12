#include <stdio.h>

int count(int arr[], int length, int n) {
    int i, ans = 0;

    for (i = 0; i < length; i++) {
        printf("index = %d, value = %d\n", i, arr[i]);
        if (arr[i] == n) {
            ans++;
        }
    }
    
    return ans;
}

int main() {
    int n, i, j;
    char t[10];
    int score[10][10] = {};
    
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%c", &t[i]);
        if (t[i] == '\n') {
            i--;
            continue;
        }

        int flag = 0;

        for (j = 0; j < n - 1; j++) {
            if (!flag && i == j) { // 自分自身と戦うのを防ぐ
                flag = 1;
                j--;
                continue;
            }
            
            scanf("%d", &score[i][j]);
        }
        puts("END");
    }

    for (i = 0; i < n - 1; i++) {
        printf("%d ", score[0][i]);
    }

    int s_count[10][3];

    for (i = 0; i < n; i++) {
        for (j = 0; j < 3; j++) {
            s_count[i][j] = count(score[i], n - 1, j);
        }
    }

    

    for (i = 0; i < n; i++) {
        printf("%c : \n", t[i]);
        for (j = 0; j < 3; j++) {
            printf("%d ", s_count[i][j]);
        }
        putchar('\n');
    }

    return 0;
}
