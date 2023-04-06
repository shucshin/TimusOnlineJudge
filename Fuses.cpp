#include <iostream>
using namespace std;

int main() {
    int a, b; cin >> a >> b;
    int fuses = 0;
    for(int i = a; i <= b; i++) {
        if(i%2!=0) fuses++;
    }
    cout << fuses << endl;
    return 0;
}