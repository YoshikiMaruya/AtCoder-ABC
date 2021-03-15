#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);++i)
#define reps(i,s,n) for(int i=(s); i<(n); i++)
using namespace std;
using ll=long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main(){
    ll a,b,c,d,maxx;
    cin>>a>>b>>c>>d;

    if(b==0 && d==0){
        cout<<a*c<<endl;
        return 0;
    }
    if(a<0 && b>0 && c<0 && d>0){
        maxx=max(a*c,b*d);
        cout<<maxx<<endl;
        return 0;
    }
    if(a<0 && b<0 && c<0 && d>0){
        maxx=max(a*c,b*c);
        cout<<maxx<<endl;
        return 0;
    }
    if(a<0 && b>0 && c<0 && d<0){
        maxx=max(a*d,a*c);
        cout<<maxx<<endl;
        return 0;
    }
    else if(b>0 && d>0){
        cout<<b*d<<endl;
        return 0;
    }
    else if(b>0 && d<0){
        cout<<a*d<<endl;
        return 0;
    }
    else if(b<0 && d>0){
        cout<<b*c<<endl;
        return 0;
    }
    else{
        cout<<a*c<<endl;
        return 0;
    }
}