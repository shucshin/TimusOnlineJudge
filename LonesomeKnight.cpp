//#include<bits/stdc++.h>
#include <iostream>
#include <iterator>
#include <sstream>
#include <string>
#include <cstring>
#include <cmath>
#include <bitset>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>
#include <utility>
//#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
//using namespace __gnu__pbds;
using ll = long long; // %lld
using ld = long double; // %0.5lf
using vi = vector<int>;
using vvi = vector<vector<int> >;
using pi = pair<int, int>; // mp(a,b);
using ps = pair<string, string>; // mp(a,b);
using pis = pair<int, string>;
using psi = pair<string, int>;
using ti = tuple<int, int, int>; // mt(a,b,c);
using ts = tuple<string, string, string>; // mt(a,b,c);
using vll = vector<ll>;
using vvll = vector<vector<ll> >;
ll gcd(ll a, ll b) {return b == 0 ? a : gcd(b, a % b);}
ll lcm(ll a, ll b) {return (a / gcd(a, b)) * b;}
#define sq(a) (a)*(a)
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define mt(a,b,c) make_tuple(a,b,c)
#define rep(i,a,b) for(int i = a; i < b; i++)
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define fo(a) find_by_order(a)
#define ok(a) order_of_key(a)
#define lb(v,a) lower_bound(v.begin(),v.end(),a)-v.begin()
#define ub(v,a) upper_bound(v.begin(),v.end(),a)-v.begin()-1
// < min to max, > max to min
bool comparePair(pi a, pi b) {return a.first == b.first ? a.second < b.second : a.first < b.first;} //if(a.f == b.f) return a.s < b.s; return a.f < b.f;}
bool compareString(string a, string b) {return a.size() == b.size() ? a < b : a.size() < b.size();} //if(a.size() != b.size()) return a.size() < b.size(); return a < b;}
bool compareTuple(ti a, ti b) {return get<0>(a) == get<0>(b) ? (get<1>(a) == get<1>(b) ? get<2>(a) < get<2>(b) : get<1>(a) < get<1>(b)) : get<0>(a) < get<0>(b);}
// priority_queue > min to max, < max to min
struct comparepq {bool operator() (int a, int b) {return a > b;}};
struct comparepqPair {bool operator() (pi a, pi b) {return a.first == b.first ? a.second > b.second : a.first > b.first;}};
// priority_queue<ti, vector<ti>, comparepqTuple> pq; priority_queue<ts, vector<ts>, comparepqTupleStr> pq;
struct comparepqTuple {bool operator() (ti a, ti b) {return get<0>(a) == get<0>(b) ? (get<1>(a) == get<1>(b) ? get<2>(a) > get<2>(b) : get<1>(a) > get<1>(b)) : get<0>(a) > get<0>(b);}};
struct comparepqTupleStr {bool operator() (ts a, ts b) {return get<0>(a) == get<0>(b) ? (get<1>(a) == get<1>(b) ? get<2>(a) > get<2>(b) : get<1>(a) < get<1>(b)) : get<0>(a) > get<0>(b);}};
// All Subsets (Power Set 2^n)
void subsetsUtil(vi v, vvi& ans, vi subset, int a) {ans.push_back(subset); rep(i,a,v.size()-1) {subset.push_back(v[i]); subsetsUtil(v, ans, subset, i+1); subset.pop_back();} return;}
vvi subsets(vi v) {vi subset; vvi ans; subsetsUtil(v, ans, subset, 0); return ans;}
//for (int i = 0; i < ans.size(); i++) {for (int j = 0; j < ans[i].size(); j++) {cout << ans[i][j] << " ";}cout << endl;}
int binarySearch(vi v, int x) {int l = 0, r = v.size()-1; while(r >= l) {int m = (l+r)/2; v[m] < x ? l = m+1 : r = m-1; if(v[m] == x) return m;} return -1;}
bool isnumber(string a) {rep(i,0,a.length()) {if(!isdigit(a[i])) return false;}return true;}
/** ==Notes==
 * 9e1 = 90, 1e9 = 1,000,000,000
 * # of bits of n :: (int)log2(n);
 * Binary string s into int :: stoi(s,0,2);
 * Check if bit is on (i--) :: 1 & (n >> i);
*/

/**
 * a1 a2 a3 a4 a5 a6 a7 a8
 * b1 b2 b3 b4 b5 b6 b7 b8
 * c1 c2 c3 c4 c5 c6 c7 c8
 * d1 d2 d3 d4 d5 d6 d7 d8
 * e1 e2 e3 e4 e5 e6 e7 e8
 * f1 f2 f3 f4 f5 f6 f7 f8
 * g1 g2 g3 g4 g5 g6 g7 g8
 * h1 h2 h3 h4 h5 h6 h7 h8
*/

void solve() {
    string s; cin >> s;
    int switches = 0;
    if(s[0] < 'c' || s[0] > 'f') switches++;
    if(s[0] < 'b' || s[0] > 'g') switches++;
    if(s[1] < '3' || s[1] > '6') switches++;
    if(s[1] < '2' || s[1] > '7') switches++;

    switch(switches) {
        case 1:
            cout << 6 << endl;
            break;
        case 2:
            cout << 4 << endl;
            break;
        case 3:
            cout << 3 << endl;
            break;
        case 4:
            cout << 2 << endl;
            break;
        default:
            cout << 8 << endl;
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    //freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}