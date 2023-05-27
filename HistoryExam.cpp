#include <iostream>
#include <set>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n, m, a; cin >> n;
    set<int> professor;
    rep(i,0,n) {cin >> a; professor.insert(a);}
    int ans = 0;
    cin >> m;
    rep(i,0,m) {
        cin >> a;
        if(professor.count(a)) ans++;
    }
    cout << ans << endl;

    return 0;
}