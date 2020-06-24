#include <stdio.h>

int main(void){
    int i = 1;
    while(1 <= i && i <= 100){
        if(!(i % 7)) printf("%d\n", i);
        i++;
    }

    return 0;
}
