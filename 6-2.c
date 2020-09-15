#include <stdio.h>
#include <stdlib.h>
#define SIZE 9

int main(void){
    int i, a[SIZE];

    for (i = 0; i < SIZE; i++)
        a[i] = i + 1;

    srand((unsigned)time(NULL));
    for (i = 0; i < SIZE; i++){
        int j = rand() % SIZE;
        int tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
    }

    for (i = 0; i < SIZE; i++)
        printf("%3d", a[i]);

    putchar('\n');

    return 0;
}
