#include <iostream>
using namespace std;
bool digitsSorted(int n) {
    if (n / 10 == 0) {
        return true;
    } else if (n < 0) {
        return digitsSorted(-n);
    } else {
        int last = n % 10;
        n = n / 10;

        if (last < (n % 10)) {
            return false;
        } else {
            return digitsSorted(n);
        }
    }
}

int main_digits_sorted() {
    cout << digitsSorted(4321) << endl;
    return 0;
}
