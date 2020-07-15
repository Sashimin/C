#include <stdio.h>

int main(void){
    int i, d;
    printf("How many days: ");
    scanf("%d", &d);
    puts("   | Sun Mon Tue Wed Thu Fri Sat");
    puts("---+----------------------------");

    for (i = 1; i <= d; i++) {
        if(!((i - 1) % 7))
            printf(" %d |", 1 + (i - 1) / 7);
        printf("%4d", i);
        if(!(i % 7)) putchar('\n');
    }
    if(d % 7) putchar('\n');

    return 0;
}
