#include <bits/stdc++.h>
using namespace std;
using ll = long long; // %lld
#define endl '\n'
#define snd second
#define FOR(i,a,b) for(int i = (a); i < (b); i++)

// g++ A.cpp -o A && ./A < in.txt > out.txt
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, a; cin >> n;
    map<ll,ll> m;
    FOR(_,0,n) {
        cin >> a;
        m[a]++;
    }
    ll ans = 0;
    for(auto a : m) {
        ans += (a.snd/4);
    }
    cout << ans << endl;

    return 0;
}