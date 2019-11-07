#include <iostream>

using namespace std;

int digitCount(int n) {
    int count = 0;
    if (n < 0) n = -n;
    while (n > 0) {
        n /= 10;
        count++;
    }

    return count;
}

int main_digit() {
    int n;
    cin >> n;
    cout << "El número de dígitos del número ingresado es: " << digitCount(n) << endl;
    return 0;
}
