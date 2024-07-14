#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<ll>;
#define endl '\n'
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define all(a) (a).begin(), (a).end()

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, ans = 1; cin >> n;
    vi A(n); 
    FOR(i,0,n) cin >> A[i]; sort(all(A));
    while(next_permutation(all(A))) { ans++; if(ans == 6) break; }
    cout << (ans > 5 ? "Yes" : "No") << endl;
    return 0;
}