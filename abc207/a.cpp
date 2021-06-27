#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define reps(i, s, n) for (int i = (s); i < (n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
#define MOD 998244353

int main(){
  int a,b,c,x[3];
  cin>>a>>b>>c;

  x[0]=a;
  x[1]=b;
  x[2]=c;

  sort(x,x+3);

  cout<<x[1]+x[2]<<endl;
  return 0;
}
