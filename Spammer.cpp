#include <iostream>
#include <map>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    map<string,int> m;
    int n; cin >> n;
    string s;
    rep(i,0,n) {
        cin >> s;
        m[s]++;
    }
    for(auto a : m) {
        if(a.second >= 2) cout << a.first << "\n";
    }
    return 0;
}