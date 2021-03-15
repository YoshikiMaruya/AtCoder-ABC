#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);++i)
using namespace std;
using ll=long long;
#define chmax(x, y) { x = max(x, y); }
#define chmin(x, y) { x = min(x, y); }

int main(){
    ll n,cnt=0;
    cin>>n;
    ll a[200005];
    ll maxnum=0;
    rep(i,n) cin>>a[i];

    rep(i,n){
        chmax(maxnum,a[i]);
        cnt+=maxnum-a[i];
    }
    cout<<cnt<<endl;
    return 0;

}