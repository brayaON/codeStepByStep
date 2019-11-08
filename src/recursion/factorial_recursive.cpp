#include <iostream>
using namespace std;

int factorial_recursivo(int n);

int main_factorial() {
    int n;
    cout << "Ingrese un valor y se le calculará el factorial: ";
    cin >> n;

    cout << "fact(" << n << ") = " << factorial_recursivo(n) << endl;
}

int factorial_recursivo(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial_recursivo(n - 1);
    }
}
