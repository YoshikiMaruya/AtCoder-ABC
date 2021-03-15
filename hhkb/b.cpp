#include <bits/stdc++.h>
#include <iomanip>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define reps(i, s, n) for (int i = (s); i < (n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
#define MOD 1000000007

char mas[100][100];
int dx[2]={1,0},dy[2]={0,-1};
int h,w;

// void dfs(int x,int y){
//     mas[y][x]=0;
//     for(int i=0;i<4;i++){
//         int nx=x+dx[i];
//         int ny=y+dy[i];
//         if(nx>=0 && nx<w && ny>=0 && ny<h && mas[ny][nx]=='.'){
//             dfs(nx,ny);
//         }
//     }
// }

int main(){
    int cnt=0;
    cin>>h>>w;

    rep(i,h)rep(j,w) cin>>mas[i][j];

    rep(i,h)rep(j,w){
        if(mas[i][j]=='.'){
                for(int k=0;k<2;k++){
                    int nx=j+dx[k];
                    int ny=i+dy[k];
                    if(nx>=0 && nx<w && ny>=0 && ny<h && mas[ny][nx]=='.'){
                        cnt++;
                    }
                }
        }
    }

    cout<<cnt<<endl;
    return 0;
}