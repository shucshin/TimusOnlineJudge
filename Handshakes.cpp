#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<ll>;
using pi = pair<ll,ll>;
#define endl '\n'
#define FOR(i,a,b)  for(int i = (a); i < (b); i++)
#define RFOR(i,a,b) for(int i = (b)-1; i >= (a); i--)
#define all(a) (a).begin(), (a).end()

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, k, a, b, ans = 0; cin >> n >> k;
    while(cin >> n >> k) {
	ll x = 0;
	FOR(_,0,k) {
	    cin >> a >> b;
	    ans += (x*b);
	    x += b;
	}
    }
    cout << ans << endl;

    return 0;
}
