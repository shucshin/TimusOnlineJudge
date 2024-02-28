#include <bits/stdc++.h>
using namespace std;
using ll = long long; // %lld
using vi = vector<ll>;
#define endl '\n'
#define FOR(i,a,b) for(int i = (a); i < (b); i++)

// g++ A.cpp -o A && ./A < in.txt > out.txt
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, k, x, y; cin >> n >> k;
    ll a = k, b = 0;
    FOR(_,0,n) {
        cin >> x >> y;
        a += x, b += y;
    }
    ll ans = a-b-(2*n)-2;
    if(ans < 0) cout << "Big Bang!\n";
    else cout << ans << endl;
    return 0;
}