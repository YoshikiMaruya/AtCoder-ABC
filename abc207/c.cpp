#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define reps(i, s, n) for (int i = (s); i < (n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
#define MOD 998244353

int main(){
  ll n,t[2005],l[2005],r[2005],count=0;

  cin>>n;
  rep(i,n) cin>>t[i]>>l[i]>>r[i];

  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(t[i]==1 && t[j]==1){
        if(l[i]<=r[j]){
          count++;
          continue;
        }
        if(r[i]>=l[j]){
          count++;
          continue;
        }
        continue;
      }
      if(t[i]==1 && t[j]==2){
        if(l[i]<r[j]){
          count++;
          continue;
        }
        if(r[i]>=l[j]){
          count++;
          continue;
        }
        continue;
      }
      if(t[i]==1 && t[j]==3){
        if(l[i]<=r[j]){
          count++;
          continue;
        }
        if(r[i]>l[j]){
          count++;
          continue;
        }
        continue;
      }
      if(t[i]==1 && t[j]==4){
        if(l[i]<r[j]){
          count++;
          continue;
        }
        if(r[i]>l[j]){
          count++;
          continue;
        }
        continue;
      }
      if(t[i]==2 && t[j]==1){
        if(l[i]<=r[j]){
          count++;
          continue;
        }
        if(r[i]>l[j]){
          count++;
          continue;
        }
        continue;
      }
      if(t[i]==2 && t[j]==2){
        if(l[i]<r[j]){
          count++;
          continue;
        }
        if(r[i]>l[j]){
          count++;
          continue;
        }
        continue;
      }
      if(t[i]==2 && t[j]==3){
        if(l[i]<=r[j]){
          count++;
          continue;
        }
        if(r[i]>l[j]+1){
          count++;
          continue;
        }
        continue;
      }
      if(t[i]==2 && t[j]==4){
        if(l[i]<r[j]){
          count++;
          continue;
        }
        if(r[i]>l[j]+1){
          count++;
          continue;
        }
        continue;
      }
      if(t[i]==3 && t[j]==1){
        if(l[i]<r[j]){
          count++;
          continue;
        }
        if(r[i]>=l[j]){
          count++;
          continue;
        }
        continue;
      }
      if(t[i]==3 && t[j]==2){
        if(l[i]+1<r[j]){
          count++;
          continue;
        }
        if(r[i]>=l[j]){
          count++;
          continue;
        }
        continue;
      }
      if(t[i]==3 && t[j]==3){
        if(l[i]<r[j]){
          count++;
          continue;
        }
        if(r[i]>l[j]){
          count++;
          continue;
        }
        continue;
      }
      if(t[i]==3 && t[j]==4){
        if(l[i]+1<r[j]){
          count++;
          continue;
        }
        if(r[i]>l[j]){
          count++;
          continue;
        }
        continue;
      }
      if(t[i]==4 && t[j]==1){
        if(l[i]<r[j]){
          count++;
          continue;
        }
        if(r[i]>l[j]){
          count++;
          continue;
        }
        continue;
      }
      if(t[i]==4 && t[j]==2){
        if(l[i]+1<r[j]){
          count++;
          continue;
        }
        if(r[i]>l[j]){
          count++;
          continue;
        }
        continue;
      }
      if(t[i]==4 && t[j]==3){
        if(l[i]<r[j]){
          count++;
          continue;
        }
        if(r[i]>l[j]+1){
          count++;
          continue;
        }
        continue;
      }
      if(t[i]==4 && t[j]==4){
        if(l[i]+1<r[j]){
          count++;
          continue;
        }
        if(r[i]>l[j]+1){
          count++;
          continue;
        }
        continue;
      }
    }

    cout<<count<<endl;
    return 0;
  }
}
