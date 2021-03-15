#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);++i)
using namespace std;
using ll=long long;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define chmax(x, y) { x = max(x, y); }
#define chmin(x, y) { x = min(x, y); }

int main(){
    
    fastIO

    ll n,cnt=0,ans=0;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i%j==0){
                cnt++;
            }
        }
        ans+=i*cnt;
        cnt=0;
    }

    cout<<ans<<endl;
}