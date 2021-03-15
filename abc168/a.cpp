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
    string s;
    cin>>s;

    s.reverse(s.begin(),s.end());

    if(s[0]=='2' || s[0]=='4' || s[0]=='5' || s[0]=='7' || s[0]=='9'){
        cout<<"hon"<<endl;
        return 0;
    }
    else if(s[0]=='0' || s[0]=='1' || s[0]=='6' || s[0]=='8'){
        cout<<"pon"<<endl;
        return 0;
    }
    else if(s[0]=='3'){
        cout<<"bon"<<endl;
        return 0;
    }


}
