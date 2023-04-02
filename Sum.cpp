#include <iostream>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    ll sum = 0;
    if(n > 0) {
        sum = (n*(n+1))/2;
    } else {
        int m = abs(n);
        sum = 1-(m*(m+1))/2;
    }
    cout << sum << endl;
    return 0;
}