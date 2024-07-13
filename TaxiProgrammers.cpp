#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<ll>;
#define endl '\n'
#define fst first
#define snd second
#define FOR(i,a,b)  for(int i = (a); i < (b); i++)
const ll INF = 1e18;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    vector<vi> path = {
        {0,1,2,3,4},
        {0,2,1,3,4},
        {0,2,3,1,4},
        {0,3,2,1,4},
    };

    vector<vi> A(5,vi(5));
    FOR(i,0,5) FOR(j,0,5) cin >> A[i][j];
    pair<ll,vi> ans = {INF,{}};

    for(auto v : path) {
        ll x = 0;
        FOR(i,0,4) x += A[v[i]][v[i+1]];
        if(x < ans.fst) {
            ans.fst = x;
            ans.snd = v;
        }
    }

    cout << ans.fst << endl;
    for(auto a : ans.snd) cout << a+1 << " "; cout << endl;
    return 0;
}