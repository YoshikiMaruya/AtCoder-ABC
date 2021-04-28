#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define reps(i, s, n) for (int i = (s); i < (n); i++)
using namespace std;
using ll = long long;

int main() {
  int n, count = 0;
  pair<ll, ll> a[100005];
  cin >> n;
  rep(i,n) cin >> a[i].first >> a[i].second;
  sort(a, a + n);

  for(int i = 0; i < n; i++) {
    if(a[i].first==0 && a[i].second==0) continue;
    for (int j = i + 1; j < n; j++) {
      if(a[i].first == a[j].second && a[i].second == a[j].first){
        count++;
        a[j].first=0;
        a[j].second=0;
        break;
      }
    }
  }
  cout << count << endl;
}
