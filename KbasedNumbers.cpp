#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

ll f(ll n, ll k) {
    if(n == 0) return 1;
    if(n == 1) return k-1;
    return (k-1) * (f(n-1,k) + f(n-2,k));
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, k; cin >> n >> k;
    cout << f(n,k) << endl;
    return 0;
}