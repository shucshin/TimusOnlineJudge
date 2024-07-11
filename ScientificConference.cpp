#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<ll>;
using pi = pair<ll,ll>;
#define endl '\n'
#define fst first
#define snd second
#define FOR(i,a,b) for(int i = (a); i < (b); i++)

struct cmp {
    bool operator() (pi a, pi b) {
        return a.snd == b.snd ? a.fst > b.fst : a.snd > b.snd;
    }
};

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, a, b; cin >> n;
    priority_queue<pi, vector<pi>, cmp> pq;
    FOR(_,0,n) {
        cin >> a >> b;
        pq.push({a,b});
    }

    ll ans = 1, x = pq.top().snd; pq.pop();
    while(!pq.empty()) {
        pi p = pq.top(); pq.pop();
        if(p.fst > x) {
            x = p.snd;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}