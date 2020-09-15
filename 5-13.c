#include <stdio.h>
#include <limits.h>
#define max(m, n) (m) > (n) ? (m) : (n)
#define min(m, n) (m) < (n) ? (m) : (n)

#if defined(DEBUG)
#include "debug.h"
#endif

const int month_sum[12] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};

int main(void){
    int i, j, k, data[365][6];
    int highest = INT_MIN, lowest = INT_MAX, h_prec = INT_MIN;

    for (i = 0; i < 365; i++) {
        scanf("%d,%d,%d,%d,%d,%d", &data[i][0], &data[i][1], &data[i][2], &data[i][3], &data[i][4], &data[i][5]);
    }

    for (i = 0; i < 365; i++) {
        highest = max(highest, data[i][3]);
        lowest = min(lowest, data[i][4]);
        h_prec = max(h_prec, data[i][5]);
    }

    char* s[3][2] = {{"最高気温", "°C"},
                    {"最低気温", "°C"},
                    {"最大降水量", "mm"}};
    int n[3] = {highest, lowest, h_prec};

    for (i = 0; i < 3; i++) {
        printf("%s : %d%s\n", s[i][0], n[i], s[i][1]);
        for (j = 0; j < 365; j++){
            if(data[j][i + 3] == n[i]){
                printf(" - ");
                for (k = 0; k < 3; k++) {
                    printf("%d/", data[j][k]);
                }
                printf("\b \n");
            }
        }
    }

    return 0;
}
