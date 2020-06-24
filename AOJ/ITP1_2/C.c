#include <stdio.h>
#define rep(i, a, b) for(int i = (a); i < (b); ++i)

void sort(int arr[], size_t s){
    for(int i = 0; i < s; i++){
        for(int j = 0; j < s - 1; j++){
            int mn, mx;
            if(arr[j] >= arr[j + 1]){
                mx = arr[j];
                mn = arr[j + 1];
            }else{
                mx = arr[j + 1];
                mn = arr[j];
            }
            arr[j] = mn;
            arr[j + 1] = mx;
        }
    }
}

int main(){
    int A[3];
    rep(i, 0, 3) scanf("%d", &A[i]);
    sort(A, sizeof(A) / sizeof(A[0]));
    rep(i, 0, 2) printf("%d ", A[i]);
    printf("%d\n", A[2]);

    return 0;
}
