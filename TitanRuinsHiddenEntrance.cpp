#include <iostream>
#include <vector>
using namespace std;
using vi = vector<int>;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    int n; cin >> n;
    vi v(n); rep(i,0,n) cin >> v[i];
    int sum, id=0, max=0;
    rep(i,2,n) {
        sum = v[i]+v[i-1]+v[i-2];
        if(max < sum) {
            max = sum;
            id = i;
        }
    }
    cout << max << " " << id << endl;
    return 0;
}