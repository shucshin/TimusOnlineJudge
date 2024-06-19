#include <bits/stdc++.h>
using namespace std;
using ll = long long; 
using vi = vector<ll>;
#define endl '\n'
#define FOR(i,a,b) for(int i = (a); i < (b); i++)

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    vi A(7); FOR(i,0,7) cin >> A[i];
    ll   a = (A[1]+A[2]+A[3])%2, b = (A[0]+A[2]+A[3])%2, c = (A[0]+A[1]+A[3])%2;
    bool x = (a == A[4]),        y = (b == A[5]),        z = (c == A[6]);  
    
    if(!x && !y && !z) A[3] ^= 1;
    else if (!y && !z) A[0] ^= 1;
    else if (!x && !z) A[1] ^= 1;
    else if (!x && !y) A[2] ^= 1;
    else if (!x)       A[4] ^= 1;
    else if (!y)       A[5] ^= 1;
    else if (!z)       A[6] ^= 1;
   
    for(auto a : A) cout << a << " "; cout << endl;
    
    return 0;
}
