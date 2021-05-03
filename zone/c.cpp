#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define reps(i, s, n) for (int i = (s); i < (n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
#define MOD 998244353

int main(){
  ll n;
  ll a[3005],b[3005],c[3005],d[3005],e[3005];
  cin>>n;
  rep(i,n) cin>>a[i]>>b[i]>>c[i]>>d[i]>>e[i];

  cout<<min({*max_element(a,a+n),*max_element(b,b+n),*max_element(c,c+n),*max_element(d,d+n),*max_element(e,e+n)})<<endl;
  return 0;
}
