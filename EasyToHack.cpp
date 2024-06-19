#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<ll>;
#define endl '\n'
#define FOR(i,a,b)  for(int i = (a); i < (b); i++)
#define RFOR(i,a,b) for(int i = (b)-1; i >= (a); i--)

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s; cin >> s;
    ll n = s.size(); vi A(n);
    FOR(i,0,n) A[i] = (s[i]-'a');
    if(A[0] < 5) A[0] += 26;

    FOR(i,1,n) {
        while(A[i-1] > A[i]) A[i] += 26;
    }

    RFOR(i,1,n) A[i] = A[i] - A[i-1];
    A[0] -= 5;

    FOR(i,0,n) s[i] = char(A[i]+'a');
    cout << s << endl;

    return 0;
}