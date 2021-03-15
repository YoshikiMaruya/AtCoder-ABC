#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);++i)
#define reps(i,s,n) for(int i=(s); i<(n); i++)
using namespace std;
using ll=long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
#define MOD 1000000007

int main(){
    double n;
    cin>>n;

    ll ans=pow(10,n)-2*pow(9,n)+pow(8,n);
    cout<<ans%MOD<<endl;
}