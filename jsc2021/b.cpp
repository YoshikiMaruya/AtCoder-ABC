#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define reps(i, s, n) for (int i = (s); i < (n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
#define MOD 998244353

int main (){
  int n,m;
  int a[1005],b[1005];

  cin>>n>>m;
  rep(i,n) cin>>a[i];
  rep(i,m) cin>>b[i];

  int solve[1005]={};

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(a[i]==b[j]) solve[i]=a[i];
    }
  }

  // rep(i,n*m) cout<<solve[i]<<endl;

  for(int i=0;i<n;i++){
    if(a[i]!=solve[i]) cout<<a[i]<<" ";
    if(b[i]!=solve[i]) cout<<b[i]<<" ";
  }
  cout<<endl;
  return 0;
}
