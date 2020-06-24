#include <stdio.h>

int main(void){
	int a;
	do{
		printf("1以上20以下の整数を入力してください: ");
		scanf("%d", &a);
	}while(!(a >= 1 && a <= 20));

	while(a-- > 0) putchar('*');
	putchar('\n');

	return 0;
}
