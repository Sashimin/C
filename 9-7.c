#include <stdio.h>

int str_char(const char s[], int c) {
    int i = 0;
    
    while (s[i]) {
        if (s[i] == c) return i;
        i++;
    }

    return -1;
}

int main(void) {
    char s[80], c;
    
    printf("文字列を入力してください: ");
    scanf("%s", s);

    printf("探したい文字を入力してください: ");
    scanf(" %c", &c);

    int index = str_char(s, c);

    if (index == -1) {
        puts("その文字は含まれていません。");
    } else {
        printf("%s の中に %c が最初に出現する添え字は %d です。\n", s, c, index);
    }

    return 0;
}
