#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define reps(i,s,n) for(int i=(s); i<(n); i++)
using namespace std;
using ll=long long;
#define chmax(x, y) { x = max(x, y); }
#define chmin(x, y) { x = min(x, y); }
#define mod 1000000007

int main(){
    ll a;
    double b;
    cin>>a>>b;

    ll c=b*100+0.01;
    ll ans=(a*c)/100;

    cout<<ans<<endl;
    return 0;
}