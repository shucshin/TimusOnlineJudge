#include <iostream>
#include <sstream>
#include <cmath>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
using ld = long double;
using vi = vector<ll>;
#define endl '\n'
#define pb push_back
#define mp make_pair
#define all(a) (a).begin(), (a).end()
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define RFOR(i,a,b) for(int i = (b)-1; i >= (a); i--)
const ld PI = 3.1415926535897932384626433832795028841971;

struct pt{ll id; ld x, y;}; 
// This is necessary to be able to use set<pt>
bool operator<(const pt &p, const pt &q) {
    return mp(p.y, p.x) < mp(q.y, q.x);
}

// Direction :: collinear 0, clockwise -1, counterclockwise 1;
int orientation(pt p, pt q, pt r) {
    ld v = (r.y-p.y)*(q.x-p.x)-(q.y-p.y)*(r.x-p.x);
    return !v ? 0 : (v < 0 ? -1 : 1);
}

bool cw(pt p, pt q, pt r, bool collinear) {
    int o = orientation(p,q,r);
    return o < 0 || (collinear && o == 0);
}

bool ccw(pt p, pt q, pt r, bool collinear) {
    int o = orientation(p, q, r);
    return o > 0 || (collinear && o == 0);
}

vector<pt> grahamScan(vector<pt> &pts, bool collinear = 0) {
    pt p0 = *min_element(all(pts), [](pt p, pt q) {return mp(p.y, p.x) < mp(q.y, q.x);});
    sort(all(pts), [&p0](const pt &p, const pt &q) {
        int o = orientation(p0,p,q);
        if(!o) return (p0.x-p.x)*(p0.x-p.x)+(p0.y-p.y)*(p0.y-p.y) < (p0.x-q.x)*(p0.x-q.x)+(p0.y-q.y)*(p0.y-q.y);
        return o < 0; // o > 0 for ccw
    });
    if(collinear) {
        int a = (int)pts.size()-1;
        while(a >= 0 && !orientation(p0, pts[a], pts.back())) a--;
        reverse(pts.begin()+a+1, pts.end());
    }
    vector<pt> ch;
    FOR(i,0,pts.size()) {
        while(ch.size() > 1 && !cw(ch[ch.size()-2], ch.back(), pts[i], collinear)) {
            ch.pop_back();}
        ch.pb(pts[i]);
    }
    return ch;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    ll n, l; cin >> n >> l;
    ll x, y; 
    vector<pt> pts; set<pt> tmp;
    FOR(i,1,n+1) {
        cin >> x >> y;
        pt p; p.x = x; p.y = y; p.id = i;
        tmp.insert(p);
    }
    for(auto a : tmp) pts.pb(a);
    vector<pt> ch = grahamScan(pts);
    ld perimeter = 0.0;
    FOR(i,1,ch.size()) {
        pt p = ch[i-1];
        pt q = ch[i];
        ld d = sqrt((p.x-q.x)*(p.x-q.x)+(p.y-q.y)*(p.y-q.y));
        perimeter += d;
    }
    pt p = ch[0], q = ch[ch.size()-1];
    ld d = sqrt((p.x-q.x)*(p.x-q.x)+(p.y-q.y)*(p.y-q.y));
    perimeter += d;
    perimeter += (l*PI*2);
    cout << round(perimeter) << endl;
    return 0;
}