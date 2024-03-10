#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vi = vector<ld>;
#define endl '\n'
#define sq(a) (a)*(a)
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define all(a) (a).begin(), (a).end()

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ld d = sqrt(sq(100)+sq(100));
    ll n, m, k, a, b; cin >> n >> m >> k; ++n, ++m;
    vector<vi> diag(n,vi(m,0));
    FOR(_,0,k) {
        cin >> a >> b;
        diag[a][b] = 1;
    }

    vector<vi> dp(n,vi(m,0));
    FOR(i,1,n) {dp[i][0] = dp[i-1][0]+100;}
    FOR(j,1,m) {dp[0][j] = dp[0][j-1]+100;}

    FOR(i,1,n) {
        FOR(j,1,m) {
            dp[i][j] = min(dp[i-1][j], dp[i][j-1])+100;
            if(diag[i][j]) dp[i][j] = min(dp[i][j], dp[i-1][j-1]+d);
        }
    }

    cout << round(dp[n-1][m-1]) << endl;
    return 0;
}