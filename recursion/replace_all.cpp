#include <iostream>
#include <string>
using namespace std;

string replaceAllHelper(string s, char from, char to, string ans);

string replaceAll(string s, char from, char to) {
    return replaceAllHelper(s, from, to, "");
}

string replaceAllHelper(string s, char from, char to, string ans) {
    if (s.length() == 0) {
        return ans;
    } else {
        char letter = s[0];
        if (letter == from) {
            letter = to;
        }
        ans += letter;
        s = s.substr(1, s.length());
        return replaceAllHelper(s, from, to, ans);
    }
}

int main_replace_all() {
    cout << replaceAll("crazy raccoons", 'c', 'k') << endl;

    return 0;
}
