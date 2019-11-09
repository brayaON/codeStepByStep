#include <iostream>
#include <string>
using namespace std;

string reversee(string s) {
    static string ans = "";
    if (s.length() == 1) {
        ans = s[0];
    } else {
        reversee(s.substr(1));
        ans += s[0];
    }
    return ans;
}

int main_reversee() {
    string s = "Pikachu";
    cout << reversee(s) << endl;
    return 0;
}
