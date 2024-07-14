#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define FOR(i,a,b) for(int i = (a); i < (b); i++)

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, x, hun = 0, sat = 10; cin >> n;
    FOR(_,0,n) {
        string s; cin >> x >> s;
        s == "hungry" ? hun = max(hun,x) : sat = min(sat,x);
    }
    cout << (sat <= hun ? "Inconsistent" : to_string(sat)) << endl; 
    return 0;
}