#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = (a); i < (b); i++)

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    int arr[n];
    rep(i,0,n) 
        cin >> arr[i];
    int ans = INT_MAX;
    int diff;
    rep(i,0,(1<<n)) {
        diff = 0;
        rep(j,0,n)
            i & (1 << j) ? diff += arr[j] : diff -= arr[j];
        ans = min(ans,abs(diff));
    }
    cout << ans << endl;
    return 0;
}