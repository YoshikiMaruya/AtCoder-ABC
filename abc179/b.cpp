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
    int n;
    cin>>n;
    int d[100][2];
    rep(i,n) rep(j,2) cin>>d[i][j];

    rep(i,n){
        if(d[i][0]==d[i][1]){
            i++;
            if(i==n) break;
            if(d[i][0]==d[i][1]){
                i++;
                if(i==n) break;
                if(d[i][0]==d[i][1]) {
                    cout<<"Yes"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"No"<<endl;
    return 0;
}