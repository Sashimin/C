#include <stdio.h>

int main(void){
	int sum, x;
	do{
		scanf("%d", &x);
		sum += x;
	}while(x);

	printf("総和: %d\n", sum);

	return 0;
}
