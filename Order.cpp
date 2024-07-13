#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pi = pair<ll,ll>;
#define endl '\n'
#define fst first
#define snd second
#define FOR(i,a,b) for(int i = (a); i < (b); i++)

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, x; cin >> n;
    map<ll,ll> m; pi p = {0,-1}; 
    FOR(_,0,n) {
        cin >> x;
        m[x]++;
        if(m[x] > p.fst) {
            p.fst = m[x];
            p.snd = x;
        }
    }
    cout << p.snd << endl;
    return 0;
}