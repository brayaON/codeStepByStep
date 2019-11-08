#include <iostream>
using namespace std;

int gcd(int n, int m) {
    if (n < 0 || m < 0) {
        throw 1;
    } else if ( m == 0) {
        return n;
    } else {
        return gcd(m, n % m);
    }
}

int main_gcd() {
    int n = 36, m = 24;
    cout << gcd(n, m) << endl;
    return 0;
}
