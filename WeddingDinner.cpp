#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

bool extra(string s) {
    int a = s.length();
    if(a < 4) return false;
    if(s.substr(a-4,4) == "+one") return true;
    return false;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    int people = n+2;
    string s;
    rep(i,0,n) {
        cin >> s;
        if(extra(s)) people++;
    }
    if(people == 13) people++;
    cout << people*100 << endl;
    return 0;
}