#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define reps(i, s, n) for (int i = (s); i < (n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
#define MOD 998244353

int main(){
  int n;
  int a[105],b[105];

  cin>>n;

  rep(i,n) cin>>a[i];
  rep(i,n) cin>>b[i];

  int diff=b[0]-a[0]+1;
  int min=a[0];
  int max=b[0];

  for(int i=0;i<n;i++){

    if(min<a[i]) {
      diff-=a[i]-min;
      min=a[i];
    }

    if(max>b[i]) {
      diff-=max-b[i];
      max=b[i];
    }
  }

  if(diff<0){
    cout<<0<<endl;
    return 0;
  }

  cout<<diff<<endl;
  return 0;
}
