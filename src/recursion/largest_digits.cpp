#include <iostream>
using namespace std;

int largestDigit(int n) {
    if (n < 0) {
        return largestDigit(-n);
    } else if (n / 10 == 0) {
        return n;
    } else {
        int m = n % 10;
        n = n / 10;
        int ans = max(m, largestDigit(n));
        return ans;
    }
}

int main_largest() {
    int n = -2;
    cout << largestDigit(n) << endl;
    return 0;
}
