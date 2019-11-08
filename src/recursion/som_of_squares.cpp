#include <cmath>
#include <iostream>
using namespace std;
int sumOfSquares(int n) {
    if (n < 0) {
        throw 1;
    } else if (n == 0) {
        return 0;
    } else {
        return pow(n, 2) + sumOfSquares(n-1);
    }
}
int main_squares() {
    cout << sumOfSquares(3) << endl;
    return 0;
}
