#include <iostream>
using namespace std;

bool isEven(int n);
bool isOdd(int n);

bool isEven(int n) {
    if (n == 0) return true;
    return isOdd(n - 1);
}

bool isOdd(int n) {
    return !isEven(n);
}

int main_numbers() {
    int a = 1122;
    if (isEven(a)) cout << "es par" << endl;
    else cout << "no es par" << endl;
    return 0;
}
