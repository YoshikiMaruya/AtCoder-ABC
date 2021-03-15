#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;
using ll=long long;


int main(){
    
    string s;
    cin >> s;
 
	long long int sum = 0;

	rep(i,s.size()) sum += s[i] - '0';
 
 
	if (sum % 9 == 0)
		cout << "Yes" << endl;
	else cout << "No" << endl;
 
    return 0;
}