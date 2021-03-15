#include <bits/stdc++.h>
#include <iomanip>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define reps(i, s, n) for (int i = (s); i < (n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
#define MOD 1000000007

int main(){
    ll n,cnt=0;
    cin>>n;

    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            int k=n-i*j;
          	if(k<1) continue;
            if((i*j+k)==n) cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}