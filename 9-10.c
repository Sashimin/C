#include <stdio.h>

int main(void) {
    char str[20];
    const char passwd[] = "abc123";

    do {
        printf("Input password: ");
        scanf("%s", str);

        if (strcmp(passwd, str) != 0) puts("Wrong!");

    } while (strcmp(passwd, str) != 0);

    puts("OK.");

    return 0;
}
