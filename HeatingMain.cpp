#include <bits/stdc++.h>
using namespace std;
using ld = long double;
using vi = vector<ld>;
#define endl '\n'
#define FOR(i,a,b) for(int i = (a); i < (b); i++)

int main() {
    ios::sync_with_stdio(1); cin.tie(0); cout.tie(0);
    ld n, sum = 0; cin >> n;
    vi A(n); FOR(i,0,n) {cin >> A[i]; sum += A[i];}
    printf("%0.7Lf\n",sum/n);
    return 0;
}