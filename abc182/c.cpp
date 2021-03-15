#include <bits/stdc++.h>
using namespace std;

#define REP(i,p,n) for(ll i=p;i<ll(n);++i)
#define rep(i,n) REP(i,0,n)

using ll = long long;
using pll = pair<ll, ll>;

int main()
{
    string S;
    cin >> S;

    const auto N = S.size();

    ll ans = N;

    for (ll x=1;x<(1<<18);++x)
    {
        ll sum = 0, bits = 0;
        for (ll i=0;i<N;++i) { if ((x>>i)&1) { sum += (S[i] - '0'); } else { ++bits; } }

        if (sum % 3 == 0) { ans = min(bits, ans); }
    }

    cout << (ans != N ? ans : -1) << endl;

    return 0;
}
