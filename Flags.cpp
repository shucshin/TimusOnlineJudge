#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<ll>;
#define endl '\n'
#define FOR(i,a,b)  for(int i = (a); i < (b); i++)

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n; cin >> n;
    vi dp(n+1); dp[1] = 2;
    FOR(i,2,n+1) dp[i] = dp[i-1] + dp[i-2];
    cout << dp[n] << endl;
    return 0;
}