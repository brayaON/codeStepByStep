#include <iostream>
using namespace std;

void helper (int n ) {
    if (n <= 1) {
        cout << n << " = ";
    } else {
        cout << (n % 2) << " ";
        helper(n / 2);
        cout << n << " ";
        n = n -1;
    }
}
void fun(int n) {
    cout << "( ";
    helper(n);
    cout << ") ( ";
    helper(n);
    cout << ")";
}

int main_reM2x() {
    int n;
    cin >> n;

    fun(n);
    return 0;
}
