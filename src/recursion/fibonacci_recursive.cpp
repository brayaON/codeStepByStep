#include <iostream>
#include <iomanip>
using namespace std;

const int MIN_INDEX = 0;
const int MAX_INDEX = 20;

int fib(int n);
int additiveSequence(int n, int t0, int t1);

int main_additive() {
    cout << "Este programa lista la secuncia de Fibonacci." << endl;
    for (int i = MIN_INDEX; i <= MAX_INDEX; i++) {
        if (i < 10) cout << " ";
        cout << "fib(" << i << ")";
        cout << " = " << setw(4) << fib(i) << endl;
    }
    return 0;
}

int fib(int n) {
    return additiveSequence(n, 0, 1);
}

int additiveSequence(int n, int t0, int t1) {
    if (n == 0) return t0;
    if (n == 1) return t1;
    return additiveSequence(n - 1, t1, t0 + t1);
}
