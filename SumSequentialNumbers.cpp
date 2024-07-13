#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

ll gauss(ll a, ll b) { return (b-a+1)*(a+b)/2; }

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll S; cin >> S;
    ll a = 1, b = 1500;
    while(a <= b) {
        ll m = (a+b) >> 1;
        ll x = gauss(1,m);
        x < S ? a = m+1 : b = m-1;
    }
    
    ll l = 1, r = a+1, sum = gauss(1,a);
    while(sum != S) {
        if(sum < S) sum += r, r++;
        if(sum > S) sum -= l, l++;
    }
    cout << l << " " << r-l << endl;
    return 0;
}