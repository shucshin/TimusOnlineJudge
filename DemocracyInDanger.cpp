#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<ll>;
#define endl '\n'
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define all(a) (a).begin(), (a).end()

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll k, ans = 0; cin >> k;
    vi A(k); FOR(i,0,k) cin >> A[i];
    sort(all(A));
    ll n = (k+1)/2;
    FOR(i,0,n) {
        ans += (A[i]+1)/2;
    }
    cout << ans << endl;
    return 0;
}