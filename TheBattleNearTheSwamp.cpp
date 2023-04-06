#include <iostream>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    int n, k, a; cin >> n >> k;
    int droids = n*k, boomboom = 0;
    rep(i,0,n) {
        cin >> a;
        if(a > k) {
            boomboom += (a-k);
            droids -= k;
        } else droids -= a;
    }
    cout << boomboom << " " << droids << endl;
    return 0;
}