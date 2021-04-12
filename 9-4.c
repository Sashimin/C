#include <stdio.h>

int main(void) {
    char str[100];
    int i = 0;

    printf("文字列を入力してください: ");
    scanf("%s", str);

    while (str[i]) {
        printf("%d番目の文字: %c（文字コード:%X）\n", i, str[i], str[i]);
        i++;
    }
    

    return 0;
}
