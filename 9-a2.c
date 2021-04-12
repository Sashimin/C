#include <stdio.h>
#include <string.h>

int main(void) {
    char str[300] = "", word[20];
    int words = 0;

    while (1) {
        printf("Input: ");
        scanf("%s", word);
        if (strcmp(word, ".") == 0) break;

        if (words > 0) {
            char new[] = " ";
            strcat(new, word);
            strcpy(word, new);
        }

        strcat(str, word);

        words++;
    }

    strcat(str, ".");

    puts(str);
    printf("%d words.\n", words);

    return 0;
}
