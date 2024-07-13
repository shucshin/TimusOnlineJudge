#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define pb push_back
#define FOR(i,a,b) for(int i = (a); i < (b); i++)

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n; cin >> n; cin.ignore();
    string s, t;
    map<string,vector<string>> hat;
    FOR(_,0,n) {
        getline(cin,s);
        getline(cin,t);
        hat[t].pb(s);
    }
    cout << "Slytherin:\n";  for(auto a : hat["Slytherin"])  cout << a << endl; cout << endl;
    cout << "Hufflepuff:\n"; for(auto a : hat["Hufflepuff"]) cout << a << endl; cout << endl;
    cout << "Gryffindor:\n"; for(auto a : hat["Gryffindor"]) cout << a << endl; cout << endl;
    cout << "Ravenclaw:\n";  for(auto a : hat["Ravenclaw"])  cout << a << endl; cout << endl;
    return 0;
}