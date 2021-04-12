#include <stdio.h>

int main(void) {
    char ch;
    
    printf("文字を1つ入力してください: ");
    ch = getchar();

    if (ch == EOF) {
        puts("\nEOFです。");
    } else {
        printf("入力された文字は%cです。\n", ch);
        printf("文字コードは10進数で%d、16進数で%Xです。\n", ch, ch);
    }

    return 0;
}
