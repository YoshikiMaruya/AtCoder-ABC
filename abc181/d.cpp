#include <bits/stdc++.h>
#include <iomanip>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define reps(i, s, n) for (int i = (s); i < (n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
#define MOD 998244353

bool solve(string s){
    if(s.size() == 1) return s == "8";
    if(s.size() == 2){
        if(stoi(s) % 8 == 0) return 1;
        swap(s[0], s[1]);
        return stoi(s) % 8 == 0;
    }
    vector<int> cnt(10);
    for(char x : s) cnt[x - '0']++;
    for(int i = 112; i < 1000; i += 8){
        auto c = cnt;
        for(char x : to_string(i)) c[x - '0']--;
        if(all_of(c.begin(), c.end(), [](int x){ return x >= 0; })) return 1;
    }
    return 0;
}
int main(){
    string s;
    cin >> s;
    puts(solve(s) ? "Yes" : "No");
}
