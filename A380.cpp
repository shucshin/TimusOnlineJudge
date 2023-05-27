#include <iostream>
#include <string>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    string s; cin >> s;
    int n; char c;
    if(s.length() == 2) {
        n = s[0]-'0';
        c = s[1];
    } else {
        n = stoi(s.substr(0,2));
        c = s[2];
    }
    
    if(n <= 2) {
        if(c == 'B' || c == 'C') s = "aisle";
        else s = "window";
    }
    else if(n <= 20) {
        if(c == 'A' || c == 'F') s = "window";
        else s = "aisle";
    } else if(n <= 65) {
        if(c == 'A' || c == 'K') s = "window";
        else if(c == 'C' || c == 'D' || c == 'G' || c == 'H') s = "aisle";
        else s = "neither";
    } else s = "neither";

    cout << s << endl;
    return 0;
}