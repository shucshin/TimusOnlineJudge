#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

ll factorial(ll n, ll k) {
    ll ans = 1;
    while(n >= 1) {
        ans *= n;
        n -= k;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, k; string s; cin >> n >> s; k = s.length();
    cout << factorial(n,k) << endl;
    return 0;
}