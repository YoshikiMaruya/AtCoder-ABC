#include <iostream>
#include <vector>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define reps(i, s, n) for (int i = (s); i < (n); i++)
using namespace std;
using ll = long long;

int main(){
  int n,m;
  vector <int> a(m),b(n);
  int c[100005];
  int count = 0;
  int miss = 0;
  int check[2] = {};
  cin>>n>>m;

  rep(i,m) cin>>a[i];
  rep(i,n) cin>>b[i];

  int x=1;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(x==a[j]){
        x++;
        c[count] = j;
        count++;
      }
      if(x==a[j]-1){
        x--;
        c[count] = j;
        count++;
      }
      if(j==m && i==b[x-1]){
        continue;
      }
      else{
        miss++;
        if(miss>2) {
          cout << -1 << endl;
          return 0;
        }
        if(check[0] != 0 && check[1] < count){
            //checkの添え字が該当するやつ文夏至
            a.insert()
            check[1]++;
        }
        //配列ぶち込み
        check[0] = c[check[1]];
        i--;
      }
    }
  }
}
