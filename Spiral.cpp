#include <bits/stdc++.h>
using namespace std;
using ll = long long; // %lld
#define endl '\n'

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, m; cin >> n >> m;
    if(n <= m) cout << (n-1)*2 << endl;
    else cout << (m*2)-1 << endl;
    return 0;
}