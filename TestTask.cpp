#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define fst first
#define snd second
#define FOR(i,a,b) for(int i = (a); i < (b); i++)

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    map<string,pair<string,bool>> m;
    ll n; cin >> n;
    string a, b, c;
    FOR(_,0,n) {
        cin >> a;
        if(a == "register") {
            cin >> b >> c;
            if(m.find(b) != m.end()) {
                cout << "fail: user already exists\n";
            } else {
                cout << "success: new user added\n";
                m[b] = {c,0};
            }
        } else if(a == "login") {
            cin >> b >> c;
            if(m.find(b) == m.end()) {
                cout << "fail: no such user\n";
            } else if(c != m[b].fst) {
                cout << "fail: incorrect password\n";
            } else if(m[b].snd == 1) {
                cout << "fail: already logged in\n";
            } else {
                cout << "success: user logged in\n";
                m[b].snd = 1;
            }

        } else { // logout
            cin >> b;
            if(m.find(b) == m.end()) {
                cout << "fail: no such user\n";
            } else if(m[b].snd == 0) {
                cout << "fail: already logged out\n";
            } else {
                cout << "success: user logged out\n";
                m[b].snd = 0;
            }
        }
    }
    return 0;
}