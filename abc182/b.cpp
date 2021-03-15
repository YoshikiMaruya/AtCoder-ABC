#include <bits/stdc++.h>
#include <iomanip>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define reps(i, s, n) for (int i = (s); i < (n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
#define MOD 998244353

int main(){
    int n,max=0;
    cin>>n;
    int a[105];
    int tmp_max=0;
    rep(i,n){
        cin>>a[i];
        if(a[i]>=a[i-1]){
            tmp_max=a[i];
        }
    }
    // cout<<tmp_max<<endl;
    int cnt[1005]={};
    int i=2,ans=0;
    for(i;i<=tmp_max;i++){
        rep(j,n){
            if(a[j]%i==0){
                cnt[i-1]++;
            }
        }
        if(cnt[i-1]>max){
            max=cnt[i-1];
            ans=i;
        }
    }
    // rep(i,tmp_max) cout<<cnt[i]<<endl;

    cout<<ans<<endl;
    return 0;

}
