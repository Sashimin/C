#include <stdio.h>

int main(void){
	int n, c;
	do{
		printf("整数を入力してください: ");
		scanf("%d", &n);

		if(n > 0) puts("その数は正です.");
		else if(n < 0) puts("その数は負です.");
		else puts("その数は0です.");

		printf("続けますか？（Yes:0 / No:9): ");
		scanf("%d", &c);
	}while(!c);

	return 0;
}
		
