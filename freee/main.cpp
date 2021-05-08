#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define reps(i, s, n) for (int i = (s); i < (n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
#define MOD 998244353

int main(){
  string r,s,dir,hh;

  cin>>r>>s>>dir>>hh;

  int a_weight[12]={3,5,2,3,4,3,4,2,2,3,6,2};
  int b_weight[5]={4,3,3,2,3};

  int hours=5;

  if(s=="A2"){
    if(dir=="U"){
      for(int i=55;i<=60;i+=5){
        cout<<i<<" ";
      }
    }
  }
  return 0;
}
