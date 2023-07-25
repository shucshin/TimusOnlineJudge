#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define fst first
#define snd second

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    unordered_map<char, int> spell;
    string s; cin >> s;
    rep(i,0,s.length()) {
        spell[s[i]]++;
    }
    char c; int freq = 0;
    for(auto a : spell) {
        if(a.snd > freq) {freq = a.snd; c = a.fst;}
    }
    cout << c << endl;
    return 0;
}