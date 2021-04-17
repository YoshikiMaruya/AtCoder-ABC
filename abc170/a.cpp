#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define reps(i, s, n) for (int i = (s); i < (n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
#define MOD 998244353

int main() {
  int x[10];

  rep(i,5) cin >> x[i];

  int ans = 0;
  for(int i = 0; i < 5; i++) {
    if(x[i] == 0) {
      ans = i + 1;
    }
  }
  cout << ans << endl;
  return 0;
}
