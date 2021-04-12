#include <stdio.h>
#include <string.h>

int main(void) {
    char str[30];

    printf("文字列を入力してください: ");
    scanf("%s", str);

    printf("文字列 %s の長さは %d です。\n", str, strlen(str));

    return 0;
}
