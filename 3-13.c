#include <stdio.h>
#include <limits.h>

int main(void){
    int n, mx = INT_MIN, mn = INT_MAX;
    do{
        printf("整数を入力してください: ");
        scanf("%d", &n);
        if(n >= 0){
            if(mx < n) mx = n;
            if(mn > n) mn = n;
        }
    }while(n >= 0);

    if(mx != INT_MIN && mn != INT_MAX){
        printf("最大値は%d, 最小値は%dです.\n", mx, mn);
    }else{
        puts("有効な値が1つも入力されていません.");
    }

    return 0;
}   
