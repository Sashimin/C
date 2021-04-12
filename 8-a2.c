#include <stdio.h>

#define max(a, b) a > b ? a : b

int isUpper(char c) {
    return 'A' <= c && c <= 'Z';
}

int isLower(char c) {
    return 'a' <= c && c <= 'z';
}

int isAlpha(char c) {
    return isUpper(c) || isLower(c);
}

int lower2Upper(char c) {
    const int diff = 32;

    if (isLower(c)) {
        return c - diff;
    }

    return c;
}

int main(void) {
    int mx = 0, alpha[26] = {};
    char i, c;
    
    do {
        c = getchar();
        if (isAlpha(c)) {
            for (i = 'A'; i <= 'Z'; i++) {
                if (lower2Upper(c) == i) {
                    alpha[i - 65]++;
                    mx = max(alpha[i - 65], mx);
                }
            }
        }
    } while(c != EOF);

    for (i = 0; i < 26; i++) {
        printf("%c: %4d  ", i + 65, alpha[i]);
        if (i > 0 && (i + 1) % 6 == 0) putchar('\n');
    }

    putchar('\n');

    printf("一番多かった文字: ");

    for (i = 0; i < 26; i++) {
        if (alpha[i] == mx) {
            printf("%c ", i + 65);
        }
    }

    putchar('\n');

    return 0;
}
