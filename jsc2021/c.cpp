#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define reps(i, s, n) for (int i = (s); i < (n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
#define MOD 998244353

int gcd(int x, int y) {
    if(x < y) swap(x, y);

    while (y > 0) {
        int r = x % y;
        x = y;
        y = r;
    }
    return x;
}

int main(){
  int a,b;
  cin>>a>>b;
  ll solve[1000005];
  int cnt=0;

  for(int i=a;i<b;i++){
    solve[cnt]=gcd(i,i+1);
    cnt++;
  }
  cout << *max_element(solve,solve + (cnt+1)) <<endl;
  return 0;
}
