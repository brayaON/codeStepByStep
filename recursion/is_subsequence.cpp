#include <iostream>
#include <string>
using namespace std;

bool isSubsequence(string s, string t) {
    if (t.length() == 0) {
        return true;
    } else if (s.size() == 0) {
        return false;
    } else {
        char l1 = s[0];
        char l2 = t[0];
        s = s.substr(1, s.length());
        if (l1 == l2) {
            t = t.substr(1, t.length());
            return isSubsequence(s, t);
        }
        return isSubsequence(s, t);
    }
}

int main_subsequence() {
    string s = "abcd", t = "ad";
    cout << isSubsequence(s, t) << endl;
    return 0;
}
