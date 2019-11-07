#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void swapPairsInPlace(string &s) {
    int tam;
    if (s.length() % 2 == 0) {
        tam = s.length();
    } else {
        tam = s.length() - 1;
    }

    for (int i = 0; i < tam; i+=2) {
        swap(s[i], s[i+1]);
    }
}

int main_swap_pairs() {
    string s = "example";
    swapPairsInPlace(s);
    cout << s << endl;
    return 0;
}
