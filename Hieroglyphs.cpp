#include <iostream>
#include <set>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    set<string> hieroglyphs;
    int n; cin >> n;
    string s;
    rep(i,0,n) {
        cin >> s;
        hieroglyphs.insert(s);
    }
    char c; cin >> c;
    for(auto a : hieroglyphs) {
        if(a[0] == c) cout << a << '\n';
    }
    return 0;
}