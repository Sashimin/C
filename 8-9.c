#include <stdio.h>

int getchartype(char c) {
    if ('0' <= c && c <= '9') {
        return 1;
    } else if ('a' <= c && c <= 'z') {
        return 2;
    } else if ('A' <= c && c <= 'Z') {
        return 3;
    }

    return 0;
}

int main(void) {
    int ch;

    printf("文字を1つ入力してください: ");
    ch = getchar();
    printf("入力された文字のタイプは%dです。\n", getchartype(ch));

    return 0;
}
