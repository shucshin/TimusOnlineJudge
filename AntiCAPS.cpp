#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define FOR(i,a,b)  for(int i = (a); i < (b); i++)

string f(string s) {
    ll n = s.size(), io = 1;
    FOR(i,0,n) {
        if(isalpha(s[i])) { 
            io ? io = 0 : s[i] = tolower(s[i]);
        }
        if(s[i] == '!' || s[i] == '?' || s[i] == '.') io = 1;
    }
    return s;
} 

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s, ans = "";
    while(getline(cin,s)) {
        if(s == "") break;
        ans += (s + "\n");
    }
    cout << f(ans) << endl;
    return 0;
}