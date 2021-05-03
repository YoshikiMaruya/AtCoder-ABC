#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define reps(i, s, n) for (int i = (s); i < (n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
#define MOD 998244353

int main(){
  double n,d,h;
  double a[105],b[105];
  double tan[105];
  int arg,max=0;

  cin>>n>>d>>h;
  rep(i,n) cin>>a[i]>>b[i];

  rep(i,n){
    tan[i]=b[i]/a[i];
    if(max<tan[i]){
      max=tan[i];
      arg=i;
    }
  }
  if(max<h/d){
    cout<<"0.0"<<endl;
    return 0;
  }
  double x = (h-b[arg])*d-(d-a[arg])*h;
  double y = x/(d-a[arg]);
  if(y<0){
    cout<<fixed<<setprecision(15)<<-y<<endl;
    return 0;
  }

  cout<<fixed<<setprecision(15)<<y<<endl;
  return 0;

}
