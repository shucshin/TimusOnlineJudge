#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pi = pair<ll,ll>;
#define endl '\n'
#define fst first
#define snd second
#define FOR(i,a,b) for(int i = (a); i < (b); i++)

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s; cin >> s;
    ll n = s.size();
    pi ans = {0,0};

    auto o = [&](ll i) {
        ll a = i, b = i;
        while(a >= 0 && b < n && s[a] == s[b]) a--, b++;
        pi p = {a+1,b-1};
        return p;
    };

    auto e = [&](ll i) {
        ll a = i, b = i+1;
        while(a >= 0 && b < n && s[a] == s[b]) a--, b++;
        pi p = {a+1,b-1};
        return p;
    };

    FOR(i,0,n) {
        pi a = o(i), b = e(i);
        if(a.snd-a.fst+1 > ans.snd-ans.fst+1) ans = a;
        if(b.snd-b.fst+1 > ans.snd-ans.fst+1) ans = b;
    }
    cout << s.substr(ans.fst, ans.snd-ans.fst+1) << endl;
    return 0;
}