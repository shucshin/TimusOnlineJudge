#include <iostream>
#include <map>
using namespace std;
using ld = long double; 
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    int n, mi; cin >> n;
    ld sum = 0;
    map<int,int> m;
    rep(i,0,n) {
        cin >> mi;
        m[mi]++;
        sum += mi;
    }
    ld avg = sum/n;
    m[5] == n ? printf("Named\n") : (avg >= 4.5 && m[3]==0 ? printf("High\n") : (m[3] == 0 ? printf("Common\n") : printf("None\n")));
    return 0;

}