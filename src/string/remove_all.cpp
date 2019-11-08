#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

string removeAll(string s, char c) {
    string ans = "";
    for (int i = 0; i < (int) s.length(); ++i) {
        if (s[i] != c) {
            ans += s[i];
        }
    }

    return ans;
}

int main_removeAll() {
    string s = "Summer is here!";
    cout << removeAll(s, 'e') << endl;
    return 0;
}
