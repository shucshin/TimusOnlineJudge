#include <iostream>
#include <string>
#include <set>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    set<string> brand;
    int n, ans = 0; cin >> n; cin.ignore();
    string s;
    rep(i,0,n) {
        getline(cin,s);
        if(brand.count(s)) ans++;
        else brand.insert(s);
    }
    cout << ans << endl;
    return 0;
}