#include <iostream>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int qxx, zzz, a; cin >> qxx >> zzz;
    rep(i,0,10) {
        cin >> a;
        zzz -= (a*20);
    }
    if(qxx <= zzz) cout << "No chance.\n";
    else cout << "Dirty debug :(\n";
    return 0;
}