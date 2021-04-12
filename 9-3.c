#include <stdio.h>

int main(void) {
    char first[20], last[20];

    printf("名字を入力してください: ");
    scanf("%s", last);

    printf("下の名前を入力してください: ");
    scanf("%s", first);

    printf("あなたのイニシャルは%c.%cです。\n", first[0], last[0]);

    return 0;
}
