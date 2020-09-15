#include <stdio.h>
#include <stdlib.h>
#define SIZE 9

int main(void){
    int i, n, input, flag = 0, a[SIZE];

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
    puts("<< ナンバーサーチゲーム >>");

    for (i = 0; i < SIZE; i++){
        if(a[i] == n)
            continue;
        printf("%3d", a[i]);
    }

    putchar('\n');

    do {
        printf("欠けている数字はどれ？ : ");
        scanf("%d", &input);
        if(input == n){
            puts("正解！");
            flag = 1;
        }else{
            puts("不正解");
            flag = 0;
        }
    } while (!flag);

    return 0;
}
