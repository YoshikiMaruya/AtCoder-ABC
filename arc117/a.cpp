#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define reps(i, s, n) for (int i = (s); i < (n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
#define MOD 998244353

int main(){
  int a,b;
  cin>>a>>b;

  if(a>b){
    int sum=0;
    for(int i=1;i<=a;i++){
      cout<<i<<" ";
      if(i>=b) sum+=i;
    }
    for(int j=1;j<=b;j++){
      if(j<b) cout<<-j<<" ";
    }
    cout<<-sum<<endl;
  }
  if(a==b){
    for(int i=1;i<=a;i++){
      cout<<i<<" ";
    }
    for(int j=1;j<=b;j++){
      cout<<-j<<" ";
    }
    cout<<endl;
  }
  if(a<b){
    int sum=0;
    for(int i=1;i<a;i++){
      cout<<i<<" ";
    }
    for(int j=1;j<=b;j++){
      if(j<=b) cout<<-j<<" ";
      if(j>=a) sum+=j;
    }
    cout<<sum<<endl;
  }
  return 0;
}
