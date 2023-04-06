#include <iostream>
#include <vector>
using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;

void printSquare(vvi &v) {
    for(int i = 0; i < v.size(); i++)
        for(int j = 0; j < v[i].size(); j++)
            cout << v[i][j] << " \n"[j==v.size()-1];
}

int main() {
    int num = 1, n; cin >> n;
    vvi square(n,vi(n));

    for(int j = n-1; j >= 0; j--) {
        int i = 0;
        for(int k = j; k < n; k++, i++) {
            square[i][k] = num;
            num++;
        }
    }

    for(int i = 1; i < n; i++) {
        int k = i;
        for(int j = 0; j < n-i; j++, k++) {
            square[k][j] = num;
            num++;
        }
    }
    printSquare(square);
    return 0;
}