#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define reps(i, s, n) for (int i = (s); i < (n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
#define MOD 998244353


int main(){
  ll a,b,c,d;
  cin>>a>>b>>c>>d;

  ll blue=a,red=0,count=0;

  rep(i,MOD){
    if(blue<=red*d){
      cout<<count<<endl;
      return 0;
    }
    blue+=b;
    red+=c;
    count++;
  }

  // while(true){
  //   if(blue<=red*d){
  //     cout<<count<<endl;
  //     return 0;
  //   }
  //   blue+=b;
  //   red+=c;
  //   count++;
  // }

  cout<<-1<<endl;
  return 0;
}
