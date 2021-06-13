#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define reps(i, s, n) for (int i = (s); i < (n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
#define MOD 998244353

int main(){
  ll n;
  int k;

  cin>>n>>k;

  for(int i=0;i<k;i++){
    if(n%200==0) n/=200;
    else{
      n*=1000;
      n+=200;
    }
  }

  cout<<n<<endl;
  return 0;
}
