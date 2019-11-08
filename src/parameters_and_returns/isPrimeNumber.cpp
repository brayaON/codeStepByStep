#include <iostream>
using namespace std;

bool isPrimeNumber(int n) {
    if (n > 1) {
        if (n == 2) return true;
        for (int i = 2; i * i <= n; ++i) {
            if (n % i == 0) return false;
        }
        return true;
    } else {
        return false;
    }
}

int main_prime() {
    int n;
    cout << "Ingrese un número y se le dirá si este es o no primo: ";
    cin >> n;

    if (isPrimeNumber(n)) {
        cout << "El número " << n << " es un número primo." << endl;
    } else {
        cout << "El número " << n << " no es un número primo." << endl;
    }

    return 0;
}
