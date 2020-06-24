#include <stdio.h>

int main(void){
    int month;
    const int d[12] = {
        31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
    };
    printf("月を入力してください: ");
    scanf("%d", &month);

    if(1 <= month && month <= 12){
        printf("%d月は%d日までです.\n", month, d[month - 1]);
    }else{
        puts("そのような月はありません.");
    }
}
