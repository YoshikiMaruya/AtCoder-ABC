#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define reps(i, s, n) for (int i = (s); i < (n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
#define MOD 998244353

int main(){
  int n,count=0;
  string s;
  cin>>n;
  cin>>s;

  for(int i=0;i<s.size();i++){
    count++;
    if(s[i]=='1'){
      break;
    }
  }
  if(count%2!=0){
    cout<<"Takahashi"<<endl;
    return 0;
  }
  else{
    cout<<"Aoki"<<endl;
    return 0;
  }
}
