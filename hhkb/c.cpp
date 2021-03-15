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
    int n,maxx=0;
    cin>>n;

    int p[200005];
    rep(i,n) cin>>p[i];

    int ans[200005]={0};

    rep(i,n){
        if(ans[i-1]<p[i]){
            ans[i]=ans[i-1];
            cout<<ans[i]<<endl;
            continue;
        }
        else if(p[i]==0 || ans[i-1]>=p[i]){
            maxx=*max_element(p,p+i+1);
            ans[i]=maxx+1;
            cout<<ans[i]<<endl;
            continue;
        }
    }
    return 0;
}