#include <stdio.h>

int main(void){
    int month, date;
    const int d[12] = {
        31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
    };
    // printf("「月/日」という形式で日付を入力してください: ");
    scanf("%d/%d", &month, &date);

    if(1 <= month && month <= 12 && 1 <= date && date <= d[month - 1]){
        puts("OK");
    }else{
        puts("NG");
    }
}
