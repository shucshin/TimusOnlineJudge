#include<bits/stdc++.h>
using namespace std;

/**
 * a1 a2 a3 a4 a5 a6 a7 a8
 * b1 b2 b3 b4 b5 b6 b7 b8
 * c1 c2 c3 c4 c5 c6 c7 c8
 * d1 d2 d3 d4 d5 d6 d7 d8
 * e1 e2 e3 e4 e5 e6 e7 e8
 * f1 f2 f3 f4 f5 f6 f7 f8
 * g1 g2 g3 g4 g5 g6 g7 g8
 * h1 h2 h3 h4 h5 h6 h7 h8
*/

void solve() {
    string s; cin >> s;
    int switches = 0;
    if(s[0] < 'c' || s[0] > 'f') switches++;
    if(s[0] < 'b' || s[0] > 'g') switches++;
    if(s[1] < '3' || s[1] > '6') switches++;
    if(s[1] < '2' || s[1] > '7') switches++;

    switch(switches) {
        case 1:
            cout << 6 << endl;
            break;
        case 2:
            cout << 4 << endl;
            break;
        case 3:
            cout << 3 << endl;
            break;
        case 4:
            cout << 2 << endl;
            break;
        default:
            cout << 8 << endl;
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    //freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}