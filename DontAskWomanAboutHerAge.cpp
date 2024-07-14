#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define FOR(i,a,b) for(int i = (a); i < (b); i++)

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s; cin >> s;
    int mx = 1, sum = 0;
    for(auto c : s) {
        if(isalpha(c)) {
            mx = max(mx,c-'A'+10);
            sum += (c-'A'+10);
        }
        if(isdigit(c)) {
            mx = max(mx,c-'0');
            sum += (c-'0');
        }
    }
    ++mx; // Avoid 0
    FOR(b,mx,37) {
        if(sum%(b-1)==0) { cout << b << endl; return 0; }
    }
    cout << "No solution.\n";
    return 0;
}