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
    char s,t;
    cin>>s>>t;

    if(s=='Y'){
        t=t-('a'-'A');
        cout<<t<<endl;
        return 0;
    }
    else{
        cout<<t<<endl;
        return 0;
    }
}