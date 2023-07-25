#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
using vi = vector<ll>;
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(int i = a; i < b; i++)

ll bcpow(ll a, ll b, ll MOD) {
    ll r = 1;
    while(b) {
        if(b&1ll) r = r*a%MOD;
        a = a*a%MOD; b >>= 1ll;
    } return r;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll n, m, y; cin >> n >> m >> y;
    vi A;
    rep(i,0,m) {
        if(bcpow(i,n,m) == y) A.pb(i);
    }
    rep(i,0,A.size()) {
        cout << A[i] << " \n"[i==A.size()-1];
    }
    if(A.empty()) cout << -1 << endl;
    return 0;
} 