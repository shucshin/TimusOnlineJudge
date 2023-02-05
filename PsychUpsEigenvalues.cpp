#include <iostream>
#include <map>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    int n, a, c=0;
    map<int, int> m;
    while(scanf("%d", &n) != EOF) {
        c++;
        rep(i,0,n) {
            cin >> a;
            m[a]++;
        }
    }
    int ans=0;
    for(auto z : m) {
        if(z.second == c) ans++;
    }
    cout << ans << endl;
    return 0;
}