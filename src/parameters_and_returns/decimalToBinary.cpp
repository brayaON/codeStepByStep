#include <cmath>
#include <iostream>
using namespace std;

int decimalToBinary(int n);

int main_decimal() {
    int decimal;
    cout << "Ingrese un valor en base 10 y se le mostrará la representación en base-2: ";
    cin >> decimal;

    cout << decimal << "(10) = " << decimalToBinary(decimal) << "(2)" << endl;
    return 0;
}

int decimalToBinary(int n) {
    int digit = 0, count = 0;

    while (n > 0) {
        digit += pow(10, count++) * (n % 2);
        n /= 2;
    }

    return digit;
}
