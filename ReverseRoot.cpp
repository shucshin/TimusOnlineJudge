#include<bits/stdc++.h>
using namespace std;
using ld = long double; // %0.5lf

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    stack<ld> stk;
    ld a;
    while(cin >> a) {
        stk.push(sqrt(a));
    }
    while(!stk.empty()) {
        printf("%.4Lf\n", stk.top());
        stk.pop();
    }
    return 0;
}