#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

ll gauss(ll a, ll b) {return (b-a+1)*(a+b)/2;}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n; cin >> n;
    ll ans = 0, c = 0;
    while(c <= n) {
        ans += gauss(c*2,n+c);
        c++;
    }
    cout << ans << endl;
    return 0;
}