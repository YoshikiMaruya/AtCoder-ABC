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
    ll n;
    cin>>n;
    pair<int ,int> point[100005];
    rep(i,n) cin>>point[i].first>>point[i].second;

    sort(point,point+n);
    // rep(i,n) cout<<point[i].first<<point[i].second<<endl;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                int dx_1,dx_2,dy_1,dy_2;
                dx_1=point[j].first-point[i].first;
                dx_2=point[k].first-point[i].first;
                dy_1=point[j].second-point[i].second;
                dy_2=point[k].second-point[i].second;

                if(dx_2*dy_1==dx_1*dy_2){
                    cout<<"Yes"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"No"<<endl;
    return 0;
}
