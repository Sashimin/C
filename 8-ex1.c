#include <stdio.h>

int main(void) {
    int n;
    char lst[9][5] = {
        {'.', ',', '!', '?', ' '},
        {'a', 'b', 'c'},
        {'d', 'e', 'f'},
        {'g', 'h', 'i'},
        {'j', 'k', 'l'},
        {'m', 'n', 'o'},
        {'p', 'q', 'r', 's'},
        {'t', 'u', 'v'},
        {'w', 'x', 'y', 'z'}
    };

    int size[9] = {5, 3, 3, 3, 3, 3, 4, 3, 4};

    scanf("%d", &n);

    for (; n > 0; n--) {
        char ch[1024];
        int i = 0, cnt = 0;

        getchar();
        while((ch[i++] = getchar()) != '\n');

        for (i = 1; i < 1024; i++) {
            char c = ch[i];
            if (c == '\n') break;
            if (c == ch[i - 1]) {
                cnt++;
            } else if (c == '0') {
                // int index = c - '0' - 1;
                int index = 3;
                printf("%c", lst[index][(cnt - 1) % size[index]]);
                cnt = 0;
            } else {
                cnt = 0;
            }
        }
    }

    return 0;
}
