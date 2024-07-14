#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define fst first
#define snd second
#define FOR(i,a,b)  for(int i = (a); i < (b); i++)
#define RFOR(i,a,b) for(int i = (b)-1; i >= (a); i--)
#define all(a) (a).begin(), (a).end()

map<ll,ll> prime_factorization(ll n) { // w/ exponents
    map<ll,ll> factors; // fst prime, snd exponent
    while(n%2==0) {factors[2]++; n /= 2;}
    for(ll i = 3; i <= sqrt(n); i+=2) {
        while(n%i==0) {factors[i]++; n /= i;}
    }
    if(n>1) factors[n]++;
    return factors;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n; cin >> n;
    if(n == 0) { cout << "10\n";    return 0; }
    if(n < 10) { cout << n << endl; return 0; }
    string ans = "";
    map<ll,ll> m = prime_factorization(n);

    for(auto a : m) {
        if(a.fst >= 10) { cout << -1 << endl; return 0; }
        ll f = a.snd;
        if(a.fst == 2) { while(f >= 3) { ans += "8"; f -= 3; } }
        FOR(_,0,f) ans += char(a.fst + '0');
    }
    sort(all(ans));
    ll k = ans.size();
    RFOR(i,1,k) {
        ll x = (ans[i-1]-'0')*(ans[i]-'0');
        if( x < 10 ) {
            ans[i-1] = char(x+'0');
            ans.erase(i,1);
        }
    }
    sort(all(ans));
    cout << ans << endl;
    return 0;
}