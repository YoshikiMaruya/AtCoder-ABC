#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define reps(i, s, n) for (int i = (s); i < (n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
#define MOD 998244353

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  ll n,q,t[100005];
  vector<ll> a(n);
  cin>>n>>q;
  rep(i,q) cin>>t[i];

  for(int i=0;i<n;i++){
    a.push_back(i+1);
    if(i>0){
      ll tmp=a[0];
      a.erase(a.begin());
      a.push_back(tmp);
    }
  }
  // for(int i=0;i<q;i++){
  //   for(int j=0;j<n;j++){
  //     if(t[i]==a[j]) cout<<j+1<<endl;
  //   }
  // }
  for(int i=0;i<n;i++){
    if(a[i] <= q){
      cout << i+1 << endl;

    }
    if(count == q+1){
      break;
    }
  }
  return 0;
}
