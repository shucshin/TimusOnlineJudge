#include <iostream>
#include <map>
using namespace std;
#define snd second
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    int n, m, a; cin >> n >> m;
    map<int,int> electors;
    rep(i,0,m) {
        cin >> a;
        electors[a]++;
    }
    for(int i = 1; i <= n; i++) {
        printf("%0.2Lf%%\n", (long double)electors[i]*100/m);
    }
    return 0;
}