#include <iostream>
#include <string>
using namespace std;

string replaceChar(string n, char c) {
    n[0] = c;
    return n;
}

string toUpperCase(string s) {
    for (int i = 0; i < (int)s.length(); ++i) {
        s[i] = toupper(s[i]);
    }

    return s;
}

void nameGame(string n) {
    string l1 = n + ", " + n + ", " + "bo-" + replaceChar(n, 'B');
    string l2 = "Banana-fana fo-" + replaceChar(n, 'F');
    string l3 = "Fee-fi-mo-" + replaceChar(n, 'M');
    string l4 = toUpperCase(n) + "!";

    cout << l1 << endl;
    cout << l2 << endl;
    cout << l3 << endl;
    cout << l4 << endl;
}

int main_name_game() {
    string name, last;
    cout << "What is your name? ";
    cin >> name >> last;
    nameGame(name);
    cout << endl;
    nameGame(last);
    return 0;
}
