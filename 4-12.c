#include <stdio.h>
#define RED "\e[31m"
#define BLUE "\e[36m"
#define RESET "\e[0m"

int main(void){
    int i, j, d, o;
    printf("Input day and offset: ");
    scanf("%d %d", &d, &o);
    printf("   | %sSun%s Mon Tue Wed Thu Fri %sSat%s\n", RED, RESET, BLUE, RESET);
    puts("---+----------------------------");

    for (i = 1; i <= o; i++) {
        if(!((i - 1) % 7)){
            int c = 1 + (i - 1) / 7;
            printf(" %d |", c);
        }
        printf("    ");
        if(!(i % 7)) putchar('\n');
    }

    for (i = 1; i <= d; i++) {
        if(!((i + o - 1) % 7)){
            int c = 1 + (i + o - 1) / 7;
            printf(" %d |%s", c, RED);
        }
        if(!((i + o) % 7)) printf(BLUE);
        printf("%4d%s", i, RESET);
        if(!((i + o) % 7)) putchar('\n');
    }
    if((d + o) % 7) putchar('\n');

    return 0;
}
