#include <iostream>
#include <string>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

string An(int n) {
    string sin = "sin(", ans = "";
    bool io = 0;
    rep(i,1,n+1) {
        ans += sin;
        ans += to_string(i);
        if(i == n) break;
        io ? ans += "+" : ans += "-";
        io ^= 1;
    }
    rep(i,0,n) ans += ")";
    return ans;
}

string Sn(int n) {
    string ans = "";
    rep(i,0,n-1) ans += "(";
    rep(i,1,n) {
        ans += An(i);
        ans += ("+" + to_string(n-i+1) + ")");
    }
    ans += An(n);
    ans += "+1";
    return ans;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    cout << Sn(n) << endl;
    return 0;
}