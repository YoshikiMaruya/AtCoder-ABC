#include <bits/stdc++.h>
#include <iomanip>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define reps(i, s, n) for (int i = (s); i < (n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
#define MOD 1000000007

int main(){
    ll n,x[100005],X[100005];

    cin>>n;
    rep(i,n){
        cin>>x[i];
        X[i]=abs(x[i]);
    }
    ll a=0,b=0,c=1e-9;

    rep(i,n){
        a+=X[i];
        b+=(X[i]*X[i]);
        c=max(c,X[i]);
    }

    long double r_b=sqrt(b);

    cout<<a<<endl;
    cout<<fixed<<setprecision(15)<<r_b<<endl;
    cout<<c<<endl;

    return 0;

}


