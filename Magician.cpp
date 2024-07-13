#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<ll>;
#define endl '\n'
#define pb push_back
#define FOR(i,a,b)  for(int i = (a); i < (b); i++)

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, m; cin >> n >> m;
    vi A(n); FOR(i,0,n) { cin >> A[i]; A.pb(A[i]); }
    m %= n;
    FOR(i,m,m+10) cout << A[i]; cout << endl;
    return 0;
}