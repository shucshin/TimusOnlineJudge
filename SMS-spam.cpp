#include <iostream>
using namespace std;
using ll = long long;

int rouble(char c) {
    if(c == 'a' || c == 'd' || c == 'g' || c == 'j' || c == 'm' || c == 'p' || c == 's' || c == 'v' || c == 'y' || c == '.' || c == ' ') return 1;
    if(c == 'b' || c == 'e' || c == 'h' || c == 'k' || c == 'n' || c == 'q' || c == 't' || c == 'w' || c == 'z' || c == ',') return 2;
    if(c == 'c' || c == 'f' || c == 'i' || c == 'l' || c == 'o' || c == 'r' || c == 'u' || c == 'x' || c == '!') return 3;
    return 0;
}

int main() {
    string str;
    getline(cin, str);
    ll cost = 0;
    for(int i = 0; i < str.length(); i++) {
        cost += rouble(str[i]);
    }
    cout << cost << endl;
    return 0;
}