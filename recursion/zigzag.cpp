#include <iostream>
using namespace std;

void zigzag(int n) {
    if (n < 0) {
        throw 1;
    } else if (n == 1) {
        cout << "*";
    } else if (n == 2) {
        cout << "**";
    } else {
        cout << "<";
        zigzag(n - 2);
        cout << ">";
    }
}

int main_zigzag() {
    zigzag(5);
    cout << endl;
    return 0;
}
