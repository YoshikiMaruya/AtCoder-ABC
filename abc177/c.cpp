#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define reps(i,s,n) for(int i=(s); i<(n); i++)
using namespace std;
using ll=long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
#define mod 1000000007

int main(){
    int n;
    cin>>n;

    ll a[200005],ans=1;
    rep(i,n) cin>>a[i];

    rep(i,(n*(n-1))/2){
        ans=a[i]
    }
    cout<<ans%mod<<endl;
}