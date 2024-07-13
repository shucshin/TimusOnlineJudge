#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<ll>;
using pi = pair<ll,ll>;
#define endl '\n'
#define pb push_back
#define fst first
#define snd second
#define FOR(i,a,b)  for(int i = (a); i < (b); i++)
#define all(a) (a).begin(), (a).end()

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string ans = "";
    vector<string> A(4), B(4,"");
    FOR(i,0,4) cin >> A[i];
    FOR(i,0,4) cin >> B[i];
    vector<pi> C;
    FOR(i,0,4) FOR(j,0,4) if(A[i][j] == 'X') { C.pb({i,j}); ans += B[i][j]; }

    auto upd = [&]() {
        FOR(x,0,4) {
            ll i = C[x].fst, j = C[x].snd;
            C[x] = {j,3-i};
        }
    };
    upd(); sort(all(C)); for(auto x : C) { ans += B[x.fst][x.snd]; }
    upd(); sort(all(C)); for(auto x : C) { ans += B[x.fst][x.snd]; }
    upd(); sort(all(C)); for(auto x : C) { ans += B[x.fst][x.snd]; }
    cout << ans << endl;
    return 0;
}