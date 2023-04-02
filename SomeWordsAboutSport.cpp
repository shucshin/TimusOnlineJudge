#include <iostream>
#include <vector>
using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    int n; cin >> n;
    vvi pixels(n,vi(n,0));
    rep(i,0,n) {rep(j,0,n) {cin >> pixels[i][j];}}

    rep(i,0,n) {
        int k = i;
        for(int j = 0; j <= i; j++) {
            cout << pixels[k][j] << " ";
            k--;
        }
    }

    rep(i,1,n) {
        int k = n-1;
        for(int j = i; j < n; j++) {
            cout << pixels[k][j] << " ";
            k--;
        }
    } cout << endl;

    return 0;
}