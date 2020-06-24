#include <stdio.h>

int main(void){
    int num;

    printf("整数を入力してください: ");
    scanf("%d", &num);

    num %= 10;

    printf("*****\n");
    printf("*   *\n");
    printf("* %d *\n", num);
    printf("*   *\n");
    printf("*****\n");

    return 0;
}
