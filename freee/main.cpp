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
  int solve[60]={0};
  int sum_weight=0;

  if(r=="A"){
    if(dir=="U"){
      for(int j=0;j<12;j++){
        string num(to_string(j+1));
        sum_weight+=a_weight[j];
        if(j<8 && s==r+num){
          for(int i=55;i<1025;i+=5){

          }
        }
        if(j>=8 && s==r+num){
          
        }
      }
    }
  }
  printf("%02d", (i+sum_weight)%60);
  return 0;
}
