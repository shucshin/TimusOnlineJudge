#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<ll>;
#define endl '\n'
#define FOR(i,a,b) for(int i = (a); i < (b); i++)

ll maxSubarraySum(vi &A) {
    ll n = A.size();
    ll ans = 0, sum = 0;
    FOR(i,0,n) {
        sum += A[i];
        if(sum > ans) ans = sum;
        if(sum < 0) sum = 0;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n; cin >> n;
    vi A(n); FOR(i,0,n) cin >> A[i];
    cout << maxSubarraySum(A) << endl;
    return 0;
}