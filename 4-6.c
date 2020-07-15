#include <stdio.h>

int main(void){
    int i, start, end, every;
    printf("何cmから : ");
    scanf("%d", &start);
    printf("何cmまで : ");
    scanf("%d", &end);
    printf("何cmごと : ");
    scanf("%d", &every);

    for(i = start; i <= end; i += every){
        printf("%dcm   %.2fkg\n", i, (i - 100) * 0.9);
    }

    return 0;
}
