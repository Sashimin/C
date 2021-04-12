#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

#if defined(DEBUG)
#include "debug.h"
#endif

#define max(a, b) a > b ? a : b
#define min(a, b) a < b ? a : b


int isNum(const char c) {
    return '0' <= c && c <= '9';
}

int isLower(const char c) {
    return 'a' <= c && c <= 'z';
}

int main(void) {
    char S[101];
    int i, len, ans, list[36] = {};

    scanf("%s", S);

    ans = strlen(S); 
    char *p = S;

    while (*p) {
        if (isNum(*p)) {
            list[*p - '0']++;
        } else if (isLower(*p)) {
            list[*p - 'a' + 10]++;
        }
        p++;
    }

    int end, flag, combo;

    do {
        end = 0;
        flag = 0; 
        combo = 0;
        for (i = 0; i < 36; i++) {
            if (i == 10) {
                if (flag) ans -= 2;
                flag = 0;
            }

            if (list[i] > 0) {
                end = 1;
                if (flag) {
                    ans -= 1;
                    combo++;
                } else {
                    flag = 1;
                    ans += 2;
                }
                list[i]--;
            } else {
                if (flag) {
                    if (!combo) ans -= 2;
                    flag = 0;
                    combo = 0;
                }
            }
            // printf("ans[#%d] : %d\n", i, ans);
        }

        // z
        if (flag && !combo) ans -= 2;
    } while (end);

    /*
    for (i = 0; i < 36; i++) {
        printf("%d : %d\n", i, list[i]);
    }
    */

    printf("%d\n", ans);

    return 0;
}

