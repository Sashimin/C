#include <stdio.h>
#include <math.h>

double average(int x[], int len) {
    int i;
    double avg = 0;
    
    for (i = 0; i < len; i++) {
        avg += x[i];
    }

    avg /= len;

    return avg;
}

double variance(int x[], int len) {
    int i;
    double v = 0, avg = average(x, len);

    for (i = 0; i < len; i++) {
        v += pow(x[i] - avg, 2);
    }

    v /= len;

    return v;
}

int main(void) {
    int i, x[5];
    puts("5つの整数を入力してください: ");

    for (i = 0; i < 5; i++) {
        scanf("%d", &x[i]);
    }

    printf("平均: %.1f\n", average(x, 5));
    printf("分散: %.1f\n", variance(x, 5));

    return 0;
}
