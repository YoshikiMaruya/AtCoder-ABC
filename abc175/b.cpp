#include <bits/stdc++.h>
#include <iomanip>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define reps(i, s, n) for (int i = (s); i < (n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
#define MOD 998244353

int main(){
    int n,cnt=0;
    ll a[105];

    cin>>n;
    rep(i,n) cin>>a[i];

    rep(i,n)rep(j,n)rep(k,n){
        if(i<j && j<k){
            if(a[i]==a[j] || a[j]==a[k] || a[i]==a[k]) continue;
            if(a[i]+a[j]>a[k] && a[i]+a[k]>a[j] && a[j]+a[k]>a[i]){
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}
