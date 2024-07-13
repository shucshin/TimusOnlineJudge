#include <bits/stdc++.h>
#include <bits/extc++.h>  // pbds
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
using ll = long long;
using vi = vector<ll>;
#define endl '\n'
#define pb push_back
#define fo(a) find_by_order(a)
#define ok(a) order_of_key(a)
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
template<class T> using ost = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll m, x, i = 0; cin >> m;
    ost<ll> tree; vi A;
    FOR(_,0,m) { cin >> x; tree.insert(x); A.pb(x); }   
    cout << *tree.fo(m-1) << endl;
    while(cin >> x) {
        if(x == -1) break;
        tree.insert(x);
        tree.erase(tree.fo(tree.ok(A[i])));
        i++; A.pb(x);
        cout << *tree.fo(m-1) << endl;
    }
    return 0;
}