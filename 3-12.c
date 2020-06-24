#include <stdio.h>

int main(void){
	int a, b = 0;
	do{
		printf("1以上20以下の整数を入力してください: ");
		scanf("%d", &a);
	}while(!(a >= 1 && a <= 20));

	while(a-- > 0){
		putchar('*');
		if(!(++b % 5)) putchar('\n');
	}	

	if(b % 5) putchar('\n');

	return 0;
}
