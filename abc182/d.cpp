#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=998244353;
ll a[200005],ans=0,mxs=0,now=0;
int n;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i],a[i]+=a[i-1];
		mxs=max(mxs,a[i]);
		ans=max(ans,now+mxs);
		now+=a[i];
	}
	cout<<ans;
    return 0;
}
