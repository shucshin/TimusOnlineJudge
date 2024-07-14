#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<ll>;
#define endl '\n'
#define FOR(i,a,b) for(int i = (a); i < (b); i++)

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, i = 0; cin >> n;
    bool cheated = 0;
    vi A(n); FOR(i,0,n) cin >> A[i];
    stack<ll> stk;
    FOR(x,1,n+1) {
        stk.push(x);
        while(!stk.empty() && stk.top() == A[i]) {
            stk.pop(); i++;
        }
    }
    if(!stk.empty()) cheated = 1;
    cout << (cheated ? "Cheater" : "Not a proof") << endl;
    return 0;
}