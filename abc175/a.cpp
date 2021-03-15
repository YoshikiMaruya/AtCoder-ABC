#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);++i)
#define reps(i,s,n) for(int i=(s); i<(n); i++)
using namespace std;
using ll=long long;
#define chmax(x, y) { x = max(x, y); }
#define chmin(x, y) { x = min(x, y); }

int main(){
	char s[3];
  	int cnt=0;
  	int i=0;
  for(i=0;i<3;i++){
  	cin>>s[i];
    if(s[i]=='R'){
    	cnt++;
    }
  }	
  if(s[0]=='R' && s[1]=='S'){
  	cnt=1;
  }
  cout<<cnt<<endl;
}