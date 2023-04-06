#include <iostream>
#include <map>
using namespace std;
#define fst first
#define snd second
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    int n; cin >> n;
    int num, tmp, freq = 1; cin >> num; tmp = num;
    rep(i,1,n) {
        cin >> tmp;
        if(num == tmp) freq++;
        else {
            cout << freq << " " << num << " ";
            num = tmp; freq = 1;
        }
    } cout << freq << " " << num << endl;
    return 0;
}