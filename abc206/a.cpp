#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define reps(i, s, n) for (int i = (s); i < (n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
#define MOD 998244353

int main(){
  double n;

  cin>>n;

  if(floor(n*1.08)<206.0){
    cout<<"Yay!"<<endl;
    return 0;
  }
  else if(floor(n*1.08)==206.0){
    cout<<"so-so"<<endl;
    return 0;
  }
  else{
    cout<<":("<<endl;
    return 0;
  }
}
