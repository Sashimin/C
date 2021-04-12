#include <stdio.h>

int main(void) {
    int cnt = 0;
    char ch;

    puts("文字を入力してください。");

    while ((ch = getchar()) != EOF) {
        if (0x30 <= ch && ch <= 0x39) cnt++;
    }

    printf("入力された文字の中に、数字は%d個含まれています、\n", cnt);

    return 0;
}    
