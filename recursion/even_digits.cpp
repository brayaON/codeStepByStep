#include <iostream>
using namespace std;

int evenDigitsHelper(int n, int ans);

int evenDigits(int n) {
    return evenDigitsHelper(n, 0);
}

int evenDigitsHelper(int n, int ans) {
    if (n == 0) {
        return ans;
    } else {
        int last = n % 10;
        n = n / 10;
        if (last % 2 == 0) {
            int aux = evenDigitsHelper(n, ans);
            aux = aux * 10 + last;
            return aux;
        }
        return evenDigitsHelper(n, ans);
    }
}

int main_even_digits() {
    int n = 35179;
    cout << evenDigits(n) << endl;
    return 0;
}
