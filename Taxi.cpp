#include <iostream>
using namespace std;

int main() {
    int a, b, c, d; cin >> a >> b >> c >> d;
    while(a < c) {
        if(a+b > c) break;
        a += b;
        c -= d;
    }
    cout << max(a,c) << endl;
    return 0;
}