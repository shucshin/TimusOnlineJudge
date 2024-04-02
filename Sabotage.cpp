#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<ll>;
#define endl '\n'
#define pb push_back
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define all(a) (a).begin(), (a).end()

int main() {
    ll n; cin >> n;
    vi A(n); FOR(i,0,n) cin >> A[i];
    sort(all(A));
    vi B;
    int i = 0, x = 0;
    while(i < n) {
        while(x >= A[i]) i++;
        if(i >= n) break;
        B.pb(n-i);
        x++;
    }
    reverse(all(B));

    vi C;
    i = 0, x = 0, n = B.size();
    while(i < n) {
        while(x >= B[i]) i++;
        if(i >= n) break;
        C.pb(n-i);
        x++;
    } 
    for(auto c : C) cout << c << endl;

    return 0;
}