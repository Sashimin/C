#include <stdio.h>

int main(void){
    int i, j, s, c;
    printf("大きさは？: ");
    scanf("%d", &s);
    printf("個数は？: ");
    scanf("%d", &c);

    for (i = 0; i < s; i++) {
        int block = 0;
        for (j = 0; j < s * c; j++) {
            if(block & 1){
                if(i == 0 || i == s - 1){
                    putchar('*');
                }else{
                    int k = j - block * s;
                    if(k == 0 || k == s - 1){
                        putchar('*');
                    }else{
                        putchar(' ');
                    }
                }
            }else{
                putchar('*');
            }
            if(!((j + 1) % s)){
                putchar(' ');
                block++;
            }
        }
        putchar('\n');
    }

    return 0;
}
