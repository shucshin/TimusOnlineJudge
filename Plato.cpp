#include <bits/stdc++.h>
using namespace std;
using ll = long long; // %lld
using vi = vector<ll>;
#define endl '\n'
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define RFOR(i,a,b) for(int i = (b)-1; i >= (a); i--)
#define all(a) (a).begin(), (a).end()

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, sum = 0, ans = 0; cin >> n;
    vi A(n); for(auto &a : A) {cin >> a; sum += a;}
    sort(all(A));
    RFOR(i,1,n) {
        ans += (sum * A[i]);
        sum -= A[i];
        ans += (sum * A[i]);
    }
    ans += sum * A[0];
    cout << ans << endl;
    return 0;
}