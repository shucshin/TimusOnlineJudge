#include <iostream>
#include <string>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int h, w, n; cin >> h >> w >> n;
    int pages=0, lines=0, chars=0;
    string s;
    rep(i,0,n) {
        cin >> s;
        int length = s.length();
        if(chars + length < w) {
            chars += (length+1);
        } else if(chars + length == w) {
            lines++; chars = 0;
        } else {
            lines++; chars = (length+1);
        }

        if(lines == h) {
            pages++;
            lines = 0; 
        }
    }
    if(lines || chars) pages++;
    cout << pages << endl;
    return 0;
}