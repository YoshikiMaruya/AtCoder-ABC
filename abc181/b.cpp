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
    ll n;
    cin>>n;
    ll a[100005],b[100005];
    rep(i,n) cin>>a[i]>>b[i];

    ll sum=0;
    for(int i=0;i<n;i++){
        sum+=(b[i]-a[i]+1)*(a[i]+b[i])/2;
    }

    cout<<sum<<endl;
    return 0;
}
