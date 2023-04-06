#include <iostream>
#include <string>
using namespace std;

int main() {
    int ticket; cin >> ticket;
    string s = to_string(ticket+1), t = to_string(ticket-1);
    while(s.length() < 6) {
        s.insert(s.begin(),'0');
    }
    while(t.length() < 6) {
        t.insert(t.begin(),'0');
    }
    int fst_s = (int)s[0]+(int)s[1]+(int)s[2], snd_s = (int)s[3]+(int)s[4]+(int)s[5];
    int fst_t = (int)t[0]+(int)t[1]+(int)t[2], snd_t = (int)t[3]+(int)t[4]+(int)t[5];
    (fst_s == snd_s || fst_t == snd_t) ? printf("Yes\n") : printf("No\n");
    return 0;
}