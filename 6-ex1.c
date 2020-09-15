#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int i, j, n, input, mode, miss = 0, flag = 0;
    time_t start;

    puts("<< ナンバーサーチゲーム >>");

    do {
        puts("0 : ノーマルモード");
        puts("1 : ハードモード");
        puts("2 : タイムアタック");
        scanf("%d", &mode);
        if(mode < 0 || mode > 2){
            puts("正しく入力してください");
        }
    } while (mode < 0 || mode > 2);

    int SIZE;

    switch(mode){
        case 0:
            SIZE = 9;
            break;
        case 1:
            SIZE = 19;
            break;
        case 2:
            SIZE = 9;
            puts("現在、開発中");
            exit(0);
        }

    int a[SIZE];

    for (i = 0; i < SIZE; i++)
        a[i] = i + 1;

    srand((unsigned)time(NULL));
    for (i = 0; i < SIZE; i++){
        int j = rand() % SIZE;
        int tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
    }

    n = a[rand() % SIZE];

    start = time(NULL);
    for (i = 0, j = 0; i < SIZE; i++, j++){
        if(a[i] == n){
            j--;
            continue;
        }
        if(j > 0 && j % 9 == 0) puts("");
        printf("%4d", a[i]);
    }

    putchar('\n');

    do {
        printf("欠けている数字はどれ？(1～%d) : ", SIZE);
        scanf("%d", &input);
        if(input == n){
            puts("正解！");
            flag = 1;
        }else{
            puts("不正解");
            flag = 0;
            miss++;
        }
    } while (!flag);

    puts("<< RESULT >>");
    printf("ミス回数 : %d回\n", miss);
    printf("タイム : %d秒\n", (int)difftime(time(NULL), start));

    return 0;
}
