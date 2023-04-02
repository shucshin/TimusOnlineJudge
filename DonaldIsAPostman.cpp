#include <iostream>
#include <set>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    set<char> A = {'A','P','O','R'}, B = {'B','M','S'}, C = {'D','G','J','K','T','W'};
    int ans = 0, cur=1, now;
    int n; cin >> n;
    string s;
    rep(i,0,n) {
        cin >> s;
        now = A.count(s[0]) ? 1 : (B.count(s[0]) ? 2 : 3);
        ans += abs(cur-now);
        cur = now;
    }
    cout << ans << endl;
    return 0;
}