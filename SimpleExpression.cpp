#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int a, b, c; cin >> a >> b >> c;
    cout << min(a-b-c, a-b*c) << endl;
    return 0;
}