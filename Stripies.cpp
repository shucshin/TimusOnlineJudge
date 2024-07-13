#include <bits/stdc++.h>
using namespace std;
using ll = long long;   // %lld
using ld = long double; // %0.5lf
using vi = vector<ll>;
#define endl '\n'
#define FOR(i,a,b)  for(int i = (a); i < (b); i++)
#define rall(a) (a).rbegin(), (a).rend()

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n; cin >> n;
    vi A(n); for(auto &a : A) cin >> a; sort(rall(A));
    if(n==1) { cout << A[0] << ".00\n"; return 0;}
    ld ans = 2*sqrt(A[0]*A[1]);
    FOR(i,2,n) ans = 2*sqrt(ans*A[i]);
    cout << fixed << setprecision(2) << ans << endl;
    return 0;
}