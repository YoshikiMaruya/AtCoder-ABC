// 13分で解けなかったです。
// 前後半に数字を分けるのがみそ、stringを無理して使う必要はなかった。

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define reps(i, s, n) for (int i = (s); i < (n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
#define MOD 998244353

// int main(){
//   string s;
//   cin>>s;

//   cout<<s[0]<<endl;
//   if(s[0]>0 && s[1]>2){
//     if(s[3]==0 && s[2]==0){
//       cout<<"NA"<<endl;
//       return 0;
//     }
//     if(s[3]>0 && s[2]>2){
//       cout<<"NA"<<endl;
//       return 0;
//     }
//     if(s[3]<=2 && s[2]=='1'){
//       cout<<"YYMM"<<endl;
//       return 0;
//     }
//     if(s[3]<=9 && s[2]=='0'){
//       cout<<"YYMM"<<endl;
//       return 0;
//     }
//   }

//   return 0;
// }

int main(){
  int a;scanf("%d",&a);
  int L=a/100;
  int R=a%100;
  if(1<=L&&L<=12){
    if(1<=R&&R<=12)printf("AMBIGUOUS\n");
    else printf("MMYY\n");
  }else{
    if(1<=R&&R<=12)printf("YYMM\n");
    else printf("NA\n");
  }
}
