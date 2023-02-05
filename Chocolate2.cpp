#include <iostream>
using namespace std;

int main() {
    int m, n; cin >> m >> n;
    (m%2==0 || n%2==0) ? printf("[:=[first]\n") : printf("[second]=:]\n");
    return 0;
}