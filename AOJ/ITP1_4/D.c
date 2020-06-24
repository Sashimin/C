#include <stdio.h>
#include <limits.h>
#define rep(i, a, b) for(int i = (a); i < (b); ++i)
#define ll long long

ll max(ll a, ll b){
    if(a > b) return a;
    else return b;
}

ll min(ll a, ll b){
    if(a < b) return a;
    else return b;
}

int main(){
    int n;
    scanf("%d", &n);
    ll A[n];
    rep(i, 0, n) scanf("%lld", &A[i]);
    ll mn = INT_MAX, mx = INT_MIN, sum = 0;
    rep(i, 0, n){
        mn = min(mn, A[i]);
        mx = max(mx, A[i]);
        sum += A[i];
    }

    printf("%lld %lld %lld\n", mn, mx, sum);

    return 0;
}
