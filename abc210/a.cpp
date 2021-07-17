#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define reps(i, s, n) for (int i = (s); i < (n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
#define MOD 998244353


int main(){
  ll n,a,x,y,solve=0;
  cin>>n>>a>>x>>y;

  // rep(i,a) solve+=x;

  // reps(i,a,n) solve+=y;

  // cout<<solve<<endl;
  // return 0;

  if(n>a){
    cout<<a*x+(n-a)*y<<endl;
    return 0;
  }
  if(n==a){
    cout<<a*x<<endl;
    return 0;
  }
  if(n<a){
    cout<<n*x<<endl;
    return 0;
  }
}
