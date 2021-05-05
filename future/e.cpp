#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define reps(i, s, n) for (int i = (s); i < (n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
#define MOD 100003

int facctorialMethod(ll k){
  ll sum=1;
  for(ll i=1;i<=k;i++){
    sum*=i;
    sum%=MOD;
  }
  return sum;
}

int main(){
  ll n,count=0,c[100005];
  ll solve;
  cin>>n;
  rep(i,n) cin>>c[i];
  sort(c,c+n);
  for(int i=0;i<n;i++){
    if(i>0 && c[i-1]==c[i]) count++;
  }
  

  cout<<facctorialMethod(n)<<endl;
  return 0;
}
