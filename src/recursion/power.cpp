#include <iostream>
using namespace std;

int power(int n, int m) {
    if (m == 0) {
        return 1;
    } else {
        return n * power(n, m - 1);
    }
}

int main_power() {
    int n = 3, m = 4;
    cout << power(n, m) << endl;
    return 0;
}
