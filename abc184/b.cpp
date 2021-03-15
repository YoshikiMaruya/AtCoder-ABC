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
    ll n,x;
    string s;

    cin>>n>>x;
    cin>>s;

    ll ans=x;
    for(int i=0;i<n;i++){
        if(s[i]=='o'){
            ans++;
        }
        else if(s[i]=='x'){
            if(ans==0) continue;
            ans--;
        }
    }

    cout<<ans<<endl;

    return 0;
}
