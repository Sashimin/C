#include <stdio.h>

int main(void){
	int height, width, flag;
	
	do{
		printf("高さと幅を空白区切りで入力してください（どちらも3以上の奇数）: ");
		scanf("%d %d", &height, &width);
		if(height < 3 || width < 3 || ~height & 1 || ~width & 1){
			puts("値が正しくありません。");
			flag = 1;
		}else{
			flag = 0;
		}
	}while(flag);

	int y = 0;
	while(y++ < height){
		int x = 0;
		if(y == 1 || y == height || y == height / 2 + !!(height % 2)){
			while(x++ < width) putchar('*');
		}else{
			while(x++ < width){
				if(x == 1 || x == width || x == width / 2 + !!(width % 2)) putchar('*');
				else putchar(' ');
			}
		}
		putchar('\n');
	}

	return 0;
}
