#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

bool containsTwice(string s, char c) {
    int how = count(s.begin(), s.end(), c);
    if (how < 2) {
        return false;
    } else {
        return true;
    }
}

int main_contains() {
    string s = "hello";
    char c = 'l';
    cout << containsTwice(s, c) << endl;
    return 0;
}
