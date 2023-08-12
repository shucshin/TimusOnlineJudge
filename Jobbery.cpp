// Strongly Connected Components (Kosaraju's Algorithm)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
using vi = vector<ll>;
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(int i = a; i < b; i++)
#define all(a) (a).begin(), (a).end()

class SCC {
private:
    vector<vi> AL, AL_T;
    vi A, dfs_num, comp, ans;
    ll MAXN, num=0;
public:
    SCC(int n) {
        AL.assign(n,{}); AL_T.assign(n,{});
        dfs_num.assign(n,0); comp.assign(n,-1);
        MAXN = n;
    }
    void addEdge(int u, int v) {AL[u].pb(v); AL_T[v].pb(u);}
    void Kosaraju(int u) { 
        dfs_num[u] = 1;
        for(auto &v : AL[u]) {
            if(!dfs_num[v]) Kosaraju(v); 
        } A.pb(u);
    }
    void lap(int x) {
        comp[x] = num;
        for(auto &u : AL_T[x]) {
            if(comp[u] == -1) lap(u);
        }
    }

    void dfs(int x) {
        dfs_num[x] = 1;
        for(auto &u : AL[x]) {
            if(!dfs_num[u]) dfs(u);
        }
    }

    vi calc() {
        rep(i,0,MAXN) {if(!dfs_num[i]) Kosaraju(i);}
        for(int i = MAXN-1; i >= 0; i--) {
            if(comp[A[i]] == -1) {lap(A[i]); num++;}
        }
        dfs_num.assign(MAXN,0); dfs(A[MAXN-1]);
        rep(i,0,MAXN) {
            if(!dfs_num[i]) {return {};}
            if(comp[i]==comp[A[MAXN-1]]) ans.pb(i);
        }
        sort(all(ans)); return ans;
    }
};


int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    //freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    int n, u, v; cin >> n;
    SCC scc(n);
    rep(i,0,n) {
        while(1) {
            cin >> u;
            if(!u) break; --u;
            scc.addEdge(i,u);
        }
    } 
    vi ans = scc.calc();
    rep(i,0,ans.size()) cout << ans[i]+1 << " "; cout << 0 << endl;
    return 0;
}