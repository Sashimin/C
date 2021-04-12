#include <stdio.h>

int str_chnum(const char s[], int c) {
    int i = 0, cnt = 0;
    
    while (s[i]) {
        if (s[i] == c) cnt++;
        i++;
    }

    return cnt;
}

int main(void) {
    char s[80], c;
    
    printf("文字列を入力してください: ");
    scanf("%s", s);

    printf("探したい文字を入力してください: ");
    scanf(" %c", &c);

    int cnt = str_chnum(s, c);

    if (cnt > 0) {
        printf("文字列 %s の中には文字 %c が %d 個含まれています.\n", s, c, cnt);
    } else {
        puts("その文字は含まれていません.");
    }

    return 0;
}
