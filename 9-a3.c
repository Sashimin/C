#include <stdio.h>
#define STRLEN_MAX 80

int isLower(char c) {
    return 'a' <= c && c <= 'z';
}

int capitalize(char words[][STRLEN_MAX], int n) {
    const int diff = 'a' - 'A';
    int i;

    for (i = 0; i < n; i++) {
        if (isLower(words[i][0])) {
            words[i][0] -= diff;
        }
    }
}

int main(void) {
    char cs[][STRLEN_MAX] = {"east", "west", "123", "Kumamon"};
    int i;
    size_t len = sizeof(cs) / STRLEN_MAX;

    puts("初期状態: ");
    for (i = 0; i < len; i++) puts(cs[i]);

    capitalize(cs, len);

    puts("capitalize 関数実行後: ");
    for (i = 0; i < len; i++) puts(cs[i]);

    return 0;
}
