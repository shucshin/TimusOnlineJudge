#include<bits/stdc++.h>
using namespace std;
using ll = long long; // %lld

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    ll n; cin >> n;
    if(n >= 1 && n < 5) cout << "few\n";
    else if(n >= 5 && n < 10) cout << "several\n";
    else if(n >= 10 && n < 20) cout << "pack\n";
    else if(n >= 20 && n < 50) cout << "lots\n";
    else if(n >= 50 && n < 100) cout << "horde\n";
    else if(n >= 100 && n < 250) cout << "throng\n";
    else if(n >= 250 && n < 500) cout << "swarm\n";
    else if(n >= 500 && n < 1000) cout << "zounds\n";
    else cout << "legion\n";
    return 0;
}