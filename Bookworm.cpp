#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// g++ A.cpp -o A && ./A < in.txt > out.txt
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll vol, cov, l, r; 
    cin >> vol >> cov >> l >> r;
    cov = cov+cov;
    if(l <= r) cout << cov*(r-l) + vol*(l==r ? 0 : r-l-1) << endl;
    else cout << cov*(l-r) + vol*(l==r ? 0 : l-r+1) << endl;
    return 0;
}