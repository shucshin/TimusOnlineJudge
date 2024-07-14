#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<ll>;
#define endl '\n'
#define FOR(i,a,b)  for(int i = (a); i < (b); i++)

vector<vi> sparse_table(vi &v) {
    int n = v.size(), k = (int)log2(n)+1; vector<vi> st(n,vi(k));
    FOR(i,0,n) st[i][0] = v[i];
    FOR(j,1,k+1) {
        for(int i=0; i+(1<<j)<=n; i++) {
            st[i][j] = st[i][j-1] + st[i+(1<<(j-1))][j-1];
        }
    } return st;
}

ll RSQ(int l, int r, vector<vi> &st) {
    ll ans = 0; int k = (int)log2(st.size())+1;
    for(int j=k; j>=0; j--) {
        if(l+(1<<j)-1 <= r) {ans += st[l][j]; l += 1<<j;}
    } return ans;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, q, l, r; cin >> n;
    vi A(n); FOR(i,0,n) cin >> A[i];
    vector<vi> st = sparse_table(A);
    cin >> q;
    FOR(_,0,q) {
        cin >> l >> r; --l, --r;
        cout << RSQ(l,r,st) << endl;
    }
    return 0;
}