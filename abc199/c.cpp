#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define reps(i, s, n) for (int i = (s); i < (n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
#define MOD 998244353

int main (){
  ll n,q;
  string s;
  ll t[300005],a[300005],b[300005];

  cin>>n>>s>>q;
  bool flag=false;

  rep(i,q) {
    cin>>t[i]>>a[i]>>b[i];

    if(t[i]==2){
      if(flag==false){
        flag=true;
      }
      else{
        flag=false;
      }
    }

    if(t[i]==1){
      if(flag==false){
        swap(s[a[i]-1],s[b[i]-1]);
      }
      else{
        if(a[i]<=n && b[i]<=n){
          swap(s[a[i]-1+n],s[b[i]-1+n]);
        }
        else if(a[i]<=n && b[i]>n){
          swap(s[a[i]-1+n],s[b[i]-1-n]);
        }
        else{
          swap(s[a[i]-1-n],s[b[i]-1-n]);
        }
      }
    }
  }
  if(flag==false){
    cout<<s<<endl;
  }
  else{
    string s1=s.substr(0,n);
    string s2=s.substr(n,2*n);
    s.replace(0,n,s2);
    s.replace(n,2*n,s1);

    cout<<s<<endl;
  }
  return 0;
}
