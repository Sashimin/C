#include <stdio.h>

int main(void){
    int i, sum = 0;
    puts("5つの整数を入力してください.");
    for (i = 0; i < 5; i++) {
        int n;
        printf("%d番目: ", i + 1);
        scanf("%d", &n);
        sum += n;
    }
    printf("合計値は%dです.\n", sum);
    printf("平均値は%.1fです.\n", sum / 5.0);

    return 0;
}
