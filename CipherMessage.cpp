#include <iostream>
#include <stack>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    string s; cin >> s;
    stack<char> l, r;
    rep(i,0,s.length()) {l.push(s[i]);}
    while(!l.empty()) {
        char a = l.top(); l.pop();
        if(r.empty()) {r.push(a); continue;}
        if(a == r.top()) r.pop();
        else r.push(a);
    }
    string ans = "";
    while(!r.empty()) {
        string t(1,r.top()); r.pop();
        ans += t;
    }
    cout << ans << endl;
    return 0;
}