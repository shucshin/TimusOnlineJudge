#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define FOR(i,a,b) for(int i = (a); i < (b); i++)

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, a, sum = 0, k = 0; cin >> n;
    FOR(_,0,n) {
        cin >> a;
        k = max(k,a);
        sum += a;
    }
    cout << sum+k << endl;
    return 0;
}