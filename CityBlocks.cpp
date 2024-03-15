#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
ll gcd(ll a, ll b) {return b?gcd(b,a%b):a;}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, m; cin >> n >> m; --n; --m;
    if(n < m) swap(n,m);
    cout << ((n%m==0) ? n : n+m-gcd(n,m)) << endl;
    return 0;
}