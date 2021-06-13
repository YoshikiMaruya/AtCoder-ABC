#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define reps(i, s, n) for (int i = (s); i < (n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
#define MOD 998244353

int main(){
  ll a,b,c;

  cin>>a>>b>>c;

  if(c%2==0){
    if(abs(a)==abs(b)){
      cout<<"="<<endl;
      return 0;
    }
    if(abs(a)>abs(b)){
      cout<<">"<<endl;
      return 0;
    }
    if(abs(a)<abs(b)){
      cout<<"<"<<endl;
      return 0;
    }
  }
  else{
    if(a==b){
      cout<<"="<<endl;
      return 0;
    }
    if(a>0 && b>0){
      cout<<">"<<endl;
      return 0;
    }
    if(a>0 && b<0){
      cout<<">"<<endl;
      return 0;
    }
    if(a<0 && b>0){
      cout<<"<"<<endl;
      return 0;
    }
    if(a<0 && b<0){
      if(abs(a)>abs(b)){
        cout<<"<"<<endl;
        return 0;
      }
      if(abs(a)<abs(b)){
        cout<<">"<<endl;
        return 0;
      }
      if(abs(a)==abs(b)){
        cout<<"="<<endl;
        return 0;
      }
    }
    if(a==0 && b!=0){
      if(b>0){
        cout<<"<"<<endl;
        return 0;
      }
      if(b<0){
        cout<<">"<<endl;
        return 0;
      }
    }
    if(a!=0 && b==0){
      if(a>0){
        cout<<">"<<endl;
        return 0;
      }
      if(a<0){
        cout<<"<"<<endl;
        return 0;
      }
    }
  }
}
