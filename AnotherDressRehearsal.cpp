#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<ll>;
#define endl '\n'
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define all(a) (a).begin(), (a).end()

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll x, y, c; cin >> x >> y >> c;
    if(x+y < c) cout << "Impossible\n";
    else {
        if(x >= c) {
            cout << c << " 0\n";
        } else {
            cout << x << " " << c-x << endl;
        }
    }
    return 0;
}