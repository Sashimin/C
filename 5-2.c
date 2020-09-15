#include <stdio.h>

int main(void){
    int i;
    double n = 0, da[5] = {-2.5, 10.8, 3.5, 11.1, -1.32};

    for (int i = 0; i < 5; i++) {
        n += da[i];
    }

    printf("%.6f\n", n);

    return 0;
}
