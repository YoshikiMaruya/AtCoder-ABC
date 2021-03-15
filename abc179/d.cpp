#include <bits/stdc++.h>
#include <iomanip>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define reps(i, s, n) for (int i = (s); i < (n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
#define MOD 998244353

int main(){
    ll n,k;
    cin>>n>>k;

    int l[200005],r[200005],n[400009];
    rep(i,k) cin>>l[i]>>r[i];
    
    rep(i,k) n[i]=l[i];
    reps(i,k,(2*k)) n[i]=r[i];
    sort(n,n+(2*k));

}

