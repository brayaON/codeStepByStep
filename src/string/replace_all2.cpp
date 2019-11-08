#include <iostream>
#include <string>
using namespace std;

string replaceAll2(string s, char c1, char c2) {
    for (int i = 0; i < (int)s.length(); ++i) {
        if (s[i] == c1) {
            s[i] = c2;
        }
    }
    return s;
}

int main_replace() {
    string s = "Hello, world!";
    char c1 = 'l', c2 = 'Y';
    cout << replaceAll2(s, c1, c2) << endl;
    return 0;
}
