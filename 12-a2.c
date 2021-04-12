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

#define MAX 3

struct seiseki {
    char name[80];
    int math;
    int english;
};

int main(void) {
    int i;
    struct seiseki data[MAX];
    printf("「名前 数学の点数 英語の点数」の形式で%d個のデータを入力してください.\n", MAX);

    for (i = 0; i < MAX; i++) {
        scanf("%s %d %d", data[i].name, &data[i].math, &data[i].english);
    }

    int m_max = -1, e_max = -1;

    for (i = 0; i < MAX; i++) {
        m_max = max(m_max, data[i].math);
        e_max = max(e_max, data[i].english);
    }

    printf("数学の最高点: %d\n", m_max);
    printf("最高点を取った学生: ");

    for (i = 0; i < MAX; i++) {
        if (data[i].math == m_max) {
            printf("%s ", data[i].name);
        }
    }

    putchar('\n');
    printf("英語の最高点: %d\n", e_max);
    printf("最高点を取った学生: ");

    for (i = 0; i < MAX; i++) {
        if (data[i].english == e_max) {
            printf("%s ", data[i].name);
        }
    }

    putchar('\n');

    return 0;
}

