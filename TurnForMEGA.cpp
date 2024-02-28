#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int k, n, ai;
    cin >> k >> n;
    int ans = 0;
    for(int i = 0; i < n; i++) {
        cin >> ai;
        ans += ai;
        ans -= k;
        if(ans < 0) ans = 0;
    }
    ans < 0 ? cout << 0 << endl : cout << ans << endl;
    return 0;
}