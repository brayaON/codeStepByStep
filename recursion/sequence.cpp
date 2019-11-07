#include <iostream>
using namespace std;

void sequence(int k) {
    if (k <= 0) {
        throw 1;
    } else if (k == 1) {
        cout << k;
    } else if (k % 2 == 0) {
        cout << "(" << k;
        cout << " + ";
        sequence(k - 1);
        cout << ")";
    } else {
        cout << "(";
        sequence(k-1);
        cout << " + ";
        cout << k << ")";
    }
}

int main_sequence() {
    sequence(10);
    cout << endl;
    return 0;
}
