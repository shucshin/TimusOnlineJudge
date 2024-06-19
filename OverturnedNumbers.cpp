#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define FOR(i,a,b)  for(int i = (a); i < (b); i++)

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n; cin >> n;
    if(n > 4) { cout << "Glupenky Pierre\n"; return 0; }
    vector<string> A = {"11", "01", "60", "80"};
    FOR(i,0,n) cout << A[i] << " "; cout << endl;

    return 0;
}
