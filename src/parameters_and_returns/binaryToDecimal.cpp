#include <iostream>
#include <cmath>
using namespace std;

int binary_to_decimal(int n) {
    int digit = 0, count = 0;
    while (n > 0) {
        digit += pow(2, count++) * (n % 10);
        n /= 10;
    }
    return digit;
}

int main_binary() {

    int binary;
    cout << "Ingrese un número en base dos y obtendrá el resultado en base decimal: ";
    cin >> binary;

    cout << binary << "(2) = " << binary_to_decimal(binary) <<"(10)" << endl;
    return 0;
}

