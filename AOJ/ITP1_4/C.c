#include <stdio.h>
#define rep(i, a, b) for(int i = (a); i < (b); ++i)

// 動作環境 : C++14 AOJ
int main(){
    int A[100000], B[100000], count = 0;
    char C[100000];
    while(1){
        int a, b;
        char op;
        scanf("%d %c %d", &a, &op, &b);
        if(op == '?') break;
        A[count] = a;
        B[count] = b;
        C[count] = op;
        count++;
    }

    rep(i, 0, count){
        int a = A[i];
        int b = B[i];
        switch(C[i]){
            case '+':
                printf("%d\n", a + b);
                break;
            case '-':
                printf("%d\n", a - b);
                break;
            case '*':
                printf("%d\n", a * b);
                break;
            case '/':
                printf("%d\n", a / b);
                break;
        }
    }

    return 0;
}
