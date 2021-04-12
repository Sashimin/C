#include <stdio.h>

void hidevowel(char s[]) {
    int i = 0, j;
    const char vowel[5] = {'a', 'i', 'u', 'e', 'o'};

    while (s[i]) {
        for (j = 0; j < 5; j++) {
            if (s[i] == vowel[j]) s[i] = '*';
        }
        i++;
    }

}


int main(void) {
    char s[80];
    printf("文字列を入力してください: ");
    scanf("%s", s);

    puts("hidevowel を呼び出す前");
    puts(s);

    hidevowel(s);

    puts("hidevowel を呼び出した後");
    puts(s);

    return 0;
}
