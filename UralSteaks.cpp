#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n, k; cin >> n >> k;
    if(n <= k) {cout << 2 << endl; return;}
    n%k == 0 ? cout << (2*(n/k)) << endl : ((n%k > k/2) ? cout << (2*(n/k)+2) << endl : cout << (2*(n/k)+1) << endl);
    return 0;
}
/** 7 4 (4times)
 * 0 0 0 0 0 0 0
 * 1 1 1 1 0 0 0
 * 1 1 1 2 1 1 1
 * 2 2 2 2 2 1 1
 * 2 2 2 2 2 2 2
 * 
 *  6 4 (3 times)
 * 0 0 0 0 0 0
 * 1 1 1 1 0 0
 * 1 1 2 2 1 1
 * 2 2 2 2 2 2
 * 
 * 5 4 (3 times)
 * 0 0 0 0 0
 * 1 1 1 1 0
 * 1 2 2 2 1
 * 2 2 2 2 2
*/