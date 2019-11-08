#include <iostream>
using namespace std;

void countToBy(int n, int m) {
    if (n < 1 || m < 1) {
        throw 1;
    } else if (n <= m) {
        cout << n;
    } else {
        countToBy(n - m, m);
        cout << ", " <<  n;
    }
}

int main_count_by() {
    countToBy(182, 12);
    cout << endl;
    return 0;
}
