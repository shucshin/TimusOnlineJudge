#include <iostream>
#include <vector>
#include <stack>
using namespace std;
using ll = long long;
using vi = vector<ll>;
using pi = pair<ll,ll>;
#define endl '\n'
#define pb push_back
#define fst first
#define snd second
#define rep(i,a,b) for(int i = a; i < b; i++)

class UnionFind {
private:
    vi p, rank, setSize;
    int numSets;
public:
    UnionFind(int n) {
        p.assign(n,0);
        rep(i,0,n) p[i] = i;
        rank.assign(n,0);
        setSize.assign(n,1);
        numSets = n;
    }
    int findSet(int i) {return (p[i]==i) ? i : (p[i] = findSet(p[i]));}
    bool isSameSet(int i, int j) {return findSet(i) == findSet(j);}
    int numDisjointSets() {return numSets;}
    int sizeOfSet(int i) {return setSize[findSet(i)];}
    void unionSet(int i, int j) {
        if(isSameSet(i,j)) {
            return;
        }
        int x = findSet(i), y = findSet(j);
        if(rank[x] > rank[y]) swap(x,y);
        p[x] = y;
        if(rank[x] == rank[y]) ++rank[y];
        setSize[y] += setSize[x];
        --numSets;
    }
};

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n, m, u, v, q; cin >> n >> m;
    UnionFind UF(n); vector<pi> threads(m);
    rep(i,0,m) {
        cin >> u >> v; --u; --v;
        threads[i] = {u,v};
    }
    cin >> q; vi tear(q); vi t(m,1);
    rep(i,0,q) {
        cin >> u; --u;
        tear[i] = u;
        t[u] = 0;
    }
    rep(i,0,m) {
        if(t[i]) {UF.unionSet(threads[i].fst, threads[i].snd);}
    } 
    vi ans;
    for(int i = q-1; i >= 0; i--) {
        ans.pb(UF.numDisjointSets());
        u = threads[tear[i]].fst, v = threads[tear[i]].snd;
        UF.unionSet(u,v);
    }
    for(int i = q-1; i >= 0; i--) {
        cout << ans[i] << " ";
    } cout << endl;
    return 0;
}