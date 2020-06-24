#include <bits/stdc++.h>
#define MOD 1000000007
#define PI 3.141592653589793238
#define pb push_back
#define ALL(V) (V).begin(), (V).end()
#define rep(i, a, b) for(int i = (a); i < (b); ++i)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long long int lint;
typedef vector<ll> VL;
typedef vector<VL> VVL;
typedef vector<int> VI;
typedef pair<int, int> PII;
typedef pair<ll, ll> PLL;
inline ll gcd(ll a, ll b) { return (a % b == 0 ? b : gcd(b, a % b)); }
inline ll lcm(ll a, ll b) { return a * b / gcd(a, b); }
inline ll char_to_ll(char c) { return (int)(c - '0'); }
inline ll string_to_ll(string s) { return atoi(s.c_str()); }
inline bool is_prime(ll x){ if(x <= 1) return false; for(ll i = 2; sqrt(i) <= x; i++) if(x % i == 0) return false; return true; }

// 動作環境 : C++14 AOJ
int main(){
    ll n;
    cin >> n;
    rep(i, 1, n + 1){
        ll x = i;
        if(!(i % 3)){
            cout << " " << i;
        }else if(i % 10 == 3){
            cout << " " << i;
        }else{
            while(x > 0){
                x /= 10;
                if(x % 10 == 3){
                    cout << " " << i;
                    break;
                }
            }
        }
    }

    cout << endl;

    return 0;
}
