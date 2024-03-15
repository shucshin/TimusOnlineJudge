#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, k, c = 1; cin >> n >> k;
    ll hours = 0, computers = 1;
    while(computers < n) {
        if(c > k) {
            hours += ((n-computers)+(k-1))/k;
            break;
        }
        computers += c;
        hours++;
        c <<= 1;
    }
    cout << hours << endl;
    return 0;
}