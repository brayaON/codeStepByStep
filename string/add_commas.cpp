#include <iostream>
#include <string>
using namespace std;

int count = 1;
string addCommas(string s) {
    for (int i = s.length() - 1; i >= 0 ; --i) {
        if (count % 3 == 0 && i != 0) {
            auto ptr = s.end() - count;
            s.insert(ptr, ',');
        }
        count++;
    }
    return s;
}

int main_commas() {
    string s = "888888888888888888888";
    cout << addCommas(s) << endl;
    return 0;
}

