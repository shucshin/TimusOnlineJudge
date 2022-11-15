//#include<bits/stdc++.h>
#include <iostream>
#include <iterator>
#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>
#include <utility>
using namespace std;
#define pb(a) push_back(a)
#define rep(i,a,b) for(int i = a; i < b; i++)
#define all(a) (a).begin(), (a).end()

void printMapSimple(vector<string> &neighbors) {
    for(int i = 0; i < neighbors.size(); i++) {
        if(i == neighbors.size()-1) {
            cout << neighbors[i]; break;
        }
        cout << neighbors[i] << ", ";
    }
}

void printMap(map<string, vector<string> > &graph) {
    for(auto a : graph) {
        cout << a.first << " {";
        printMapSimple(a.second);
        cout << "}\n";
    }
}

void printDistance(map<string, int> &distance, bool isen) {
    for(auto a : distance) {
        if(a.first == "Isenbaev" && !isen) continue;
        if(a.first != "Isenbaev" && a.second == 0) {
            cout << a.first << " undefined\n";
            continue;
        }
        cout << a.first << " " << a.second << endl;
    }
}

void bfs(string s, map<string, int> &distance, map<string, bool> & visited, map<string, vector<string> >&graph) {
    visited[s] = true;
    queue<string> q; q.push(s);
    while(!q.empty()) {
        string u = q.front(); q.pop();
        int u_d = distance[u]+1;
        for(auto v : graph[u]) {
            if(!visited[v]) {
                distance[v] = u_d;
                visited[v] = true;
                q.push(v);
            }
        }
    }
}

void solve() {
    int n; cin >> n;
    map<string, vector<string> > graph;
    // mapa para saber si la persona ya fue visitada
    map<string, bool> visited;
    // mapa para saber la distancia de la persona hasta isenbaev
    map<string, int> distance;
    bool isen = false;
    string s;
    getline(cin, s);
    rep(i,0,n) {
        getline(cin, s);
        stringstream ss(s);
        string u, v, w;
        ss >> u >> v >> w;
        if(u == "Isenbaev" || v == "Isenbaev" || w == "Isenbaev") isen = true;
        // por cada línea las 3 personas están conectados a sí mismos
        graph[u].pb(v); graph[v].pb(u);
        graph[v].pb(w); graph[w].pb(v);
        graph[w].pb(u); graph[u].pb(w);
        //if(find(all(graph[w]), u) == graph[w].end())
        visited[u] = false; visited[v] = false; visited[w] = false;
        distance[u] = 0; distance[v] = 0; distance[w] = 0;
    }
    //printMap(graph);
    bfs("Isenbaev", distance, visited, graph);
    printDistance(distance, isen);
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    //freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    solve();
    return 0;
}