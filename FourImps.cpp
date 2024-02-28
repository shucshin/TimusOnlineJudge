#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n, odds = 0;
    cin >> n;
    rep(i,1,n+1) {
        if(i%2 != 0) odds++;
    }
    odds%2 == 0 ? cout << "black\n" : cout << "grimy\n";
    return 0;
}