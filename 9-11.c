#include <stdio.h>

int main(void) {
    const char seasons[][10] = {
        "spring",
        "summer",
        "autumn",
        "winter"
    };

    int month, index;

    printf("月を入力してください: ");
    scanf("%d", &month);

    switch (month) {
        case 3:
        case 4:
        case 5:
            index = 0;
            break;
        case 6:
        case 7:
        case 8:
            index = 1;
            break;
        case 9:
        case 10:
        case 11:
            index = 2;
            break;
        case 12:
        case 1:
        case 2:
            index = 3;
            break;
        default:
            puts("その月はありません。");
            return 1;
    }

    puts(seasons[index]);

    return 0;
}
