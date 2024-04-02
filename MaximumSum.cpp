#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<ll>;
#define endl '\n'
#define pb push_back
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define all(a) (a).begin(), (a).end()
const ll INF = 1e18;

tuple<ll,int,int> maxSubarray(vi &A) {
    int n = A.size(), l=0, r=0;
    ll ans = A[0], sum = 0, mp = -1;
    FOR(i,0,n) {
        sum += A[i];
        if(sum > ans) {ans = sum; l = mp+1; r = i;}
        if(sum <= 0) {sum = 0; mp = i;}
    }
    return {ans, l, r};
}

ll maxSubarray2D(vector<vi> &A) { // 1-indexed
    int n = A.size(), m = A[0].size();
    vector<vi> pfx(n,vi(m,0));
    FOR(i,1,n) FOR(j,1,m) {
        pfx[i][j] = A[i][j]+pfx[i][j-1];
    }
    ll ans = -INF;
    FOR(i,1,m) FOR(j,i,m) {
        vi v;
        FOR(k,1,n) {
            v.pb(pfx[k][j]-pfx[k][i-1]);
        }
        ans = max(ans,get<0>(maxSubarray(v)));
    }
    return ans;
}

int main() {
    ll n, ans = -INF; cin >> n;
    vector<vi> A(n+1,vi(n+1)); FOR(i,1,n+1) FOR(j,1,n+1) cin >> A[i][j];
    cout << maxSubarray2D(A) << endl;
    return 0;
}