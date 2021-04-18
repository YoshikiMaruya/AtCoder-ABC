#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define reps(i, s, n) for (int i = (s); i < (n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
#define MOD 998244353

int main(){
  string x;
  cin>>x;

  // char min = x[0];
  // int arg;
  // for(int i=0;i<x.size();i++){
  //   if(x[i] != '0' && min > x[i]){
  //     min = x[i];
  //     arg = i;
  //   }
  // }
  for(int i=0;i<x.size()-1;i++){
    for(int j=0;j<x.size()-1;j++){
      if (x[j] > x[j+1]) {
        swap(x[j], x[j+1]);
      }
    }
  }


  if(x[0]=='0'){
    for(int i=0;i<x.size();i++){
      if(x[i]!='0') {
        swap(x[0],x[i]);
        break;
      }
    }
  }

  rep(i,x.size()) cout<<x[i];
  cout<<endl;
}
