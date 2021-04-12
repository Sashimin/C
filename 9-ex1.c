#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define STRLEN_MAX 80

int isUpper(const char c) {
    return 'A' <= c && c <= 'Z';
}

int isLower(const char c) {
    return 'a' <= c && c <= 'z';
}

int isAlpha(const char c) {
    return isUpper(c) || isLower(c);
}

char toLower(const char c) {
    const int diff = 'a' - 'A';

    if (isUpper(c)) {
        return c + diff;
    }

    return c;
}

void printWord(const char word[], const char list[]) {
    int i, j;
    while (word[i]) {
        int flag = 0;

        for (j = 0; j < strlen(list); j++) {
            if (word[i] == list[j]) flag = 1;
        }

        if (flag) putchar(word[i]);
        else putchar('*');

        i++;
    }
    putchar('\n');
}

int main(void) {
    char words[][STRLEN_MAX] = {
        "astronaut",
        "benefit",
        "chocolate",
        "daughter",
        "extraordinariness"
    };
    int r, i = 0, num = sizeof(words) / STRLEN_MAX;
    const int mx = 5;

    srand((unsigned)time(NULL));
    r = rand() % num;
    
    puts("=== 文字当てゲーム ===");
    printf("単語は%d文字です。\n", strlen(words[r]));
    printf("文字を%d回入力してください。\n", mx);

    char list[mx];

    while (i < mx) {
        printf("%d回目: ", i + 1);
        scanf(" %c", &list[i]);
        if (isAlpha(list[i])) {
            printWord(words[r], list);
            i++;
        } else {
            puts("不正な文字です");
        }
    }

    char ans[STRLEN_MAX];

    printf("答えを入力してください: ");
    scanf("%s", ans);

    if (strcmp(words[r], ans) == 0) {
        puts("正解です。おめでとう！");
    } else {
        printf("残念・・正解は%sでした。\n", words[r]);
    }

    return 0;
}
