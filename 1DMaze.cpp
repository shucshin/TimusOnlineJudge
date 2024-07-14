#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define FOR(i,a,b)  for(int i = (a); i < (b); i++)
const ll INF = 1e18;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, x, a, bck = -INF, fwd = INF; cin >> n >> x;
    FOR(_,0,n) {
        cin >> a;
        a < 0 ? bck = max(bck,a) : fwd = min(fwd,a);
    }
    if(x < bck || x > fwd) { cout << "Impossible\n"; return 0; }
    cout << (x > 0 ? x : 2*fwd - x) << " " << (x < 0 ? -x : 2*-bck + x) << endl;
    return 0;
}