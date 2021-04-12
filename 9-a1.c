#include <stdio.h>

void del_digit(char s[]) {
    int i = 0, tail = 0;
    while (s[i]) {
        if (!('0' <= s[i] && s[i] <= '9')) {
            s[tail] = s[i];
            tail++;
        }
        i++;
    }
    s[tail] = '\0';
}

int main(void) {
    char str[30];
    scanf("%s", str);

    del_digit(str);

    puts(str);

    return 0;
}
