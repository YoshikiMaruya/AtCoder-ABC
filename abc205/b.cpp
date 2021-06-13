#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define reps(i, s, n) for (int i = (s); i < (n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
#define MOD 998244353

int main(){
  int n,a[1005],b[1005]={0};
  cin>>n;

  rep(i,n) cin>>a[i];
  for(int i=0;i<n;i++){
    b[i]=i+1;
  }

  sort(a,a+n);

  for(int i=1;i<=n;i++){
    if(a[i]==b[i]) continue;
    else{
      cout<<"No"<<endl;
      return 0;
    }
  }

  cout<<"Yes"<<endl;
  return 0;
}
