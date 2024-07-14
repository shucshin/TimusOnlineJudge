#include <bits/stdc++.h>
using namespace std;
using ll = long long; 
#define endl '\n'
#define sq(a) (a)*(a)
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
const double PI = 3.1415926535897932384626433832795028841971;
struct pt { double x, y; };

double length(pt a, pt b) {return sqrt(sq(a.x-b.x)+sq(a.y-b.y));}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n; double r, x, y; cin >> n >> r;
    vector<pt> A(n);
    FOR(i,0,n) { 
        cin >> x >> y;
        pt p; p.x = x; p.y = y;
        A[i] = p;
    }

    double ans = (2*PI*r);
    FOR(i,1,n) ans += length(A[i-1],A[i]); ans += length(A[n-1],A[0]);
    cout << fixed << setprecision(2) << ans << endl;
    return 0;
}