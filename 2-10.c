#include <stdio.h>

int main(void){
    int month;
    printf("何月ですか？ : ");
    scanf("%d", &month);

    if(3 <= month && month <= 5){
        puts("春ですね。");
    }else if(6 <= month && month <= 8){
        puts("夏ですね。");
    }else if(9 <= month && month <= 11){
        puts("秋ですね。");
    }else if(month == 12 || month == 1 || month == 2){
        puts("冬ですね。");
    }

    return 0;
}
