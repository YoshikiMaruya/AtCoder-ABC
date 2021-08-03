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

  if(a>0 && b>0){
    cout<<"Alloy"<<endl;
    return 0;
  }

  if(a>0 && b==0){
    cout<<"Gold"<<endl;
    return 0;
  }
  if(a==0 && b>0){
    cout<<"Silver"<<endl;
    return 0;
  }
}
