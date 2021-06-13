#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define reps(i, s, n) for (int i = (s); i < (n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
#define MOD 998244353

int main(){
  ll n,a[200005];
  int count=0;

  cin>>n;
  rep(i,n) cin>>a[i];

  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if((a[i]-a[j])%200==0) count++;
    }
  }

  cout<<count<<endl;
  return 0;
}
