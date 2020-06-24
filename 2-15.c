#include <stdio.h>
#include <time.h>

const int d[12] = {
    31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
};

int main(void){
    int byear, bmonth, bday;
    time_t timer;
    struct tm *local;
    int cyear, cmonth, cday;

    timer = time(NULL);
    local = localtime(&timer);
    cyear = local->tm_year + 1900;
    cmonth = local->tm_mon + 1;
    cday = local->tm_mday;

    printf("今日は%d年%d月%d日です。\n", cyear, cmonth, cday);
    printf("あなたの誕生日を「年/月/日」の形式で入力してください: ");
    scanf("%d/%d/%d", &byear, &bmonth, &bday);

    int diffyear = cyear - byear;
    int diffmonth = cmonth - bmonth;
    int diffday = cday - bday;

    if(diffday < 0){
        diffmonth--;
        diffday += d[bmonth - 1];
    }

    if(diffmonth < 0){
        diffyear--;
        diffmonth = 12 + diffmonth;
    }

    // Debug
    // printf("%d/%d/%d\n", diffyear, diffmonth, diffday);

    if(diffmonth == 0 && diffday == 0){
        printf("あなたは今日%d歳になりました。おめでとう!!\n", diffyear);
    }else{
        printf("あなたは%d歳です。\n", diffyear);
    }
}
