#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);++i)
#define reps(i,s,n) for(int i=(s); i<(n); i++)
using namespace std;
using ll=long long;
#define chmax(x, y) { x = max(x, y); }
#define chmin(x, y) { x = min(x, y); }

int main(){
    int d,t,s;
    cin>>d>>t>>s;

    if(d<=t*s) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;

}