#include <iostream>
#include <set>
#include <vector>
using namespace std;
using ll = long long;
using vll = vector<ll>;
#define pb push_back
#define rep(i,a,b) for(int i = a; i < b; i++)
const int MAXN = INT_MAX;

int ternarySearch(vll &v, int x) {
    int l = 0, r = v.size()-1; 
    while(r >= l) {
        int m1 = l+(r-l)/3, m2 = r-(r-l)/3; 
        if(v[m1] > x) r = m1-1; 
        else if(v[m2] < x) l = m2+1; 
        else {l = m1+1; r = m2-1;} 
        if(v[m1] == x) return m1; 
        if(v[m2] == x) return m2;
    } 
    return -1;
}

int main() {
    // 110100100010000
    // 1,2,4,7,11,16,22,29,37,46,56,67
    // Lazy Caterer's Sequence (Central Polygonal Numbers)
    vll lazy_caterer;
    ll i = 0, lazy = 1;
    while(lazy <= MAXN) {
        lazy_caterer.pb(lazy);
        i++;
        lazy = (i*(i+1))/2+1;
    } 
    int n, k; cin >> n;
    rep(i,0,n) {
        cin >> k;
        (ternarySearch(lazy_caterer,k) != -1) ? printf("1 ") : printf("0 ");
    } cout << endl;
    return 0;
}