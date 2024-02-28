#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    string s1, s2;
    cin >> s1 >> s2;
    int a = stoi(s1), b = stoi(s2);
    a%2 == 0 || b%2 == 1 ? cout << "yes\n" : cout << "no\n";
    return 0;
}