#include <iostream>
#include <queue>
using namespace std;
using ti = tuple<int, int, int>;
#define fst first
#define snd second
#define rep(i,a,b) for(int i = a; i < b; i++)

struct comparepq {
    bool operator() (ti a, ti b) {
        return get<1>(a) == get<1>(b) ? get<2>(a) > get<2>(b) : get<1>(a) < get<1>(b);
    }
};

int main() {
    priority_queue<ti, vector<ti>, comparepq> pq;
    int n, id, m; cin >> n;
    rep(i,0,n) {
        cin >> id >> m;
        pq.push({id,m,i});
    }
    while(!pq.empty()) {
        cout << get<0>(pq.top()) << " " << get<1>(pq.top()) << endl;
        pq.pop();
    } 
    return 0;
}