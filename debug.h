#include <stdio.h>

void printIArray(int *a, size_t s){
    printf("[");
    for (size_t i = 0; i < s; i++) {
        printf("%d, ", a[i]);
    }
    printf("\b\b]\n");
}


void printDArray(double *a, size_t s){
    printf("[");
    for (size_t i = 0; i < s; i++) {
        printf("%f, ", a[i]);
    }
    printf("\b\b]\n");
}
