#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i,n) for(int i=0;i<(n);i++)
#define chmax(x, y) { x = max(x, y); }
#define chmin(x, y) { x = min(x, y); }

int main(){
    
    int n,m;
    ll k,cnt=0;
    cin>>n>>m>>k;
    ll a[200005],b[200005];
    rep(i,n) cin>>a[i];
    rep(i,m) cin>>b[i];
    chmax(n,m);
    int j=0;
    rep(i,n){
        if(a[i]>b[j]){
            k-=b[j];
            i--;
            if(k<0) break;
            cnt++;
        }
        else{
            k-=a[i];
            j--;
            if(k<0) break;
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;

}