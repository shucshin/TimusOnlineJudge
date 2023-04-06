#include <iostream>
#include <queue>
#include <map>
using namespace std;
using ps = pair<string,int>;
#define fst first
#define snd second
#define rep(i,a,b) for(int i = a; i < b; i++)

struct comparepq {
    bool operator() (ps a, ps b) {
        return a.snd == b.snd ? a.fst > b.fst : a.snd < b.snd;
    }
};

int main() {
    int n; cin >> n;
    priority_queue<ps, vector<ps>, comparepq> pq;
    map<string,int> m;
    rep(i,0,n) {
        string s, t; cin >> s >> t;
        m[s]++;
    }
    for(auto a : m) {
        pq.push({a.fst,a.snd});
    }
    cout << pq.top().fst << " Penguin\n";
    return 0;
}