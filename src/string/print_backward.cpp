#include <iostream>
#include <string>
using namespace std;

void printBackward(string s) {
    if (s.empty()) {
        cout << "";
    } else if (s.length() == 1) {
        cout << s[0];
    } else {
        printBackward(s.substr(1));
        cout << s[0];
    }
}

int main_print() {
    string s = "hello there!";
    printBackward(s);
    cout << endl;
    return 0;
}
