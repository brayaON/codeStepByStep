#include <iostream>
#include <string>
using namespace std;

string stutter(string s) {
    string ans = "";
    for (int i = 0; i < s.length(); ++i) {
        ans += s[i];
        ans += s[i];
    }
    return ans;
}

int main_stutter() {
    string s = "hello";
    cout << stutter(s) << endl;
    return 0;
}
