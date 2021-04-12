#include <stdio.h>

int main(void) {
    char name[20];
    printf("名前を入力してください: ");
    scanf("%s", name);

    printf("こんにちは、%sさん。\n", name);

    return 0;
}
