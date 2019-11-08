#include <iostream>
#include <string>
using namespace std;

string crazyCaps(string &s) {
    for (int i = 0; i < (int)s.length(); ++i) {
        if (i % 2 == 0) {
            s[i] = tolower(s[i]);
        } else {
            s[i] = toupper(s[i]);
        }
    }

    return s;
}

int main_crazy() {
    string s = "Hey!! THERE!";
    cout << crazyCaps(s) << endl;
    return 0;
}
