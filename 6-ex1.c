#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

char *rules[] = {
    "ルール : 1～9までの数字の中から欠けている数字を探せ！",
    "ルール : 数字の中から欠けている数字を探せ！",
    "ルール : 数字の中から欠けている数字を探せ！\n \
        10個の問題をできるだけ速く解け！"
};

void shuffle(int a[], int size) {
    int i;
    srand((unsigned)time(NULL));
    for (i = 0; i < size; i++) {
        int j = rand() % size;
        int tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
    }
}

void countdown(int seconds) {
    for (; seconds > 0; seconds--) {
        printf("%d\n", seconds);
        sleep(1);
    }
}

int main(void) {
    int i, j, n, input, mode, size, score, miss = 0, flag = 0, q = 0;
    time_t start;

    puts("<< ナンバーサーチゲーム >>");

    do {
        puts("0 : ノーマルモード");
        puts("1 : ハードモード");
        puts("2 : タイムアタック");
        printf(">> ");
        scanf("%d", &mode);
        if (mode < 0 || mode > 2) {
            puts("正しく入力してください");
        }
    } while (mode < 0 || mode > 2);

    switch (mode) {
        case 0:
            size = 9;
            score = 100;
            break;
        case 1:
            do {
                puts("30～100までの中で挑戦したい数字を選んでね！");
                usleep(1e5 * 5);
                puts("数字が大きいほどスコアがアップするよ！");
                printf(">> ");
                scanf("%d", &size);
                if (size < 30 || size > 100) {
                    puts("正しく入力してください");
                } else {
                    score = 100 + 4 * size / 3;
                }
            } while (size < 30 || size > 100);
            break;
        case 2:
            size = 9;
            score = 150;
            break;
    }

    printf("%s\n", rules[mode]);
    sleep(2);
    countdown(3);

    int a[size];
    int b[size * 2];

    for (i = 0; i < size; i++)
        a[i] = i + 1;

    for (i = 0; i < size * 2; i++)
        b[i] = i + 1;

        start = time(NULL);

    do {
        shuffle(a, size);

        n = a[rand() % size];
        for (i = 0, j = 0; i < size; i++, j++) {
            if (a[i] == n) {
                j--;
                continue;
            }
            if (j > 0 && j % 9 == 0) puts("");
            printf("%4d", a[i]);
        }

        putchar('\n');

        do {
            printf("欠けている数字はどれ？(1～%d) : ", size);
            scanf("%d", &input);
            if (input == n) {
                puts("正解！");
                flag = 1;
                q++;
            } else {
                puts("不正解");
                flag = 0;
                miss++;
            }
        } while (!flag);

        if (q == 10)
            break;

    } while (mode == 2);

    int diffTime = (int)difftime(time(NULL), start);
    const char rankList[] = {'S', 'A', 'B', 'C', 'F'};
    signed rank;

    score -= diffTime * 2 + miss * 5;
    switch (mode) {
        case 0:
            if (score > 90) rank = 0;
            else if (score > 80) rank = 1;
            else if (score > 60) rank = 2;
            else if (score > 40) rank = 3;
            else rank = 4;
            break;
        case 1:
            if (score > 100 + (size / 2)) rank = 0;
            else if (score > (100 + size) / 2) rank = 1;
            else if (score > (100 + size) / 3) rank = 2;
            else if (score > (100 + size) / 4) rank = 3;
            else rank = 4;
            break;
        case 2:
            if (score > 120) rank = 0;
            else if (score > 90) rank = 1;
            else if (score > 60) rank = 2;
            else if (score > 30) rank = 3;
            else rank = 4;
            break;
    }

    if (score < 0) score = 0;

    puts("<< RESULT >>");
    printf("ミス回数 : %d回\n", miss);
    printf("タイム : %d秒\n", diffTime);
    printf("スコア : %d点\n", score);
    printf("ランク : %c\n", rankList[rank]);

    return 0;
}
