#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define reps(i, s, n) for (int i = (s); i < (n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
#define MOD 998244353

int main(){
  double x,y,z;
  cin >>x>>y>>z;

  double g_per = y/x;
  int count=1;

  while(true){
    if((count/z)>=g_per) break;
    count++;
  }

  cout<<count-1<<endl;
  return 0;
}
