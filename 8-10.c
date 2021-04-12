#include <stdio.h>

int isUpper(char c) {
    return 'A' <= c && c <= 'Z';
}

int isLower(char c) {
    return 'a' <= c && c <= 'z';
}

int isAlpha(char c) {
    return isUpper(c) || isLower(c);
}

char convert(char c) {
    const int diff = 32;

    if (!isAlpha(c)) return c;

    return isUpper(c) ? (c + diff) : (c - diff);
}

int main(void) {
    char c, filter = 1;

    do {
        if (filter) {
            printf("アルファベットを1つ入力してください: ");
        } else {
            filter = 1;
        }

        c = getchar();

        if (c == '\n') {
            filter = 0;
            continue;
        }
       
        if (!isAlpha(c)) {
            puts("不正な入力です。");
        }
    } while (!isAlpha(c));

    printf("%cの%s文字は%cです。\n", c, isUpper(c) ? "小" : "大", convert(c));
}
