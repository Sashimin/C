#include <stdio.h>

int main(void){
    int floor;
    printf("何階ですか？ : ");
    scanf("%d", &floor);

    switch(floor){
        case 1:
            puts("1階はフロントです。");
            break;
        case 2:
        case 3:
        case 4:
            printf("%d階は客室です。\n", floor);
            break;
        default:
            printf("%d階はありません。\n", floor);
            break;
    }

    return 0;
}
