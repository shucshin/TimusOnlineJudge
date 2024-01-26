#include <bits/stdc++.h>
using namespace std;
using lli = __int128;
using ll = long long; // %lld
using ld = long double; // %0.5Lf
using vi = vector<ll>;
using pi = pair<ll,ll>;
#define endl '\n'
#define fst first
#define snd second
#define pb push_back
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define RFOR(i,a,b) for(int i = (b)-1; i >= (a); i--)
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define lb(v,a) lower_bound(all(v),a)-v.begin()
#define ub(v,a) upper_bound(all(v),a)-v.begin()
const ll MOD = 1e9+7; // 998244353
const ll INF = 1e9;
const ll MXN = 2e5+5;

void solve() {
    ll n, k; cin >> n >> k;
    ll a = n/k, b = n%k; // b is number of teams with extra 1
    ll ans = 0;
    FOR(i,0,k) {
        if(i < b) {
            ans += (a+1)*(n-a-1);
        } else ans += (a)*(n-a);
    }
    cout << ans/2 << endl;
}

// g++ A.cpp -o A && ./A < in.txt > out.txt
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}