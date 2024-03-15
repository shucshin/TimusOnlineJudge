#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<ll>;
#define endl '\n'
#define fst first
#define snd second
#define pb push_back
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define all(a) (a).begin(), (a).end()
const ll INF = 1e18;

vector<vi> AL;
vi color;
 
pair<bool,vi> bipartite_check(ll n) {
    bool bipartite = 1; queue<ll> q;
    FOR(i,1,n+1) { // 1-indexed
        if(color[i] != INF) continue;
        q.push(i); color[i] = 0;
        while(!q.empty()) {
            ll u = q.front(); q.pop();
            for(auto &v : AL[u]) {
                if(color[v] == INF) {color[v] = color[u]^1; q.push(v);} 
                else {bipartite &= color[u] != color[v];}
            }
        }
    }
    return {bipartite,color};
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, u, v; cin >> n;
    AL.assign(n+1,{}); color.assign(n+1,INF);
    FOR(u,1,n+1) {
        while(cin >> v) {
            if(!v) break;
            AL[u].pb(v); AL[v].pb(u);
        }
    }
    bool can = 1;
    bipartite_check(n);
    vi A;
    FOR(i,1,n+1) {
        if(color[i] == INF) {can = 0; break;}
        if(!color[i]) A.pb(i);
    } 
    if(can == false) {
        cout << "IMPOSSIBLE\n";
    } else {
        cout << A.size() << endl;
        for(auto a : A) cout << a << " "; cout << endl;
    }
    return 0;
}