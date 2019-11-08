#include <iostream>
#include <string>
using namespace std;

string collapseSequencesHelper(string s, char c, string ans);

string collapseSequences(string s, char c) {
    return collapseSequencesHelper(s, c, "");
}

string collapseSequencesHelper(string s, char c, string ans) {
    if (s.length() == 0) {
        return ans;
    } else {
        char last = s[0];
        s = s.substr(1, s.length());
        if (c != last) {
            ans += last;
        } else if (ans[ans.length() - 1] != last) {
            ans += last;
        }
        return collapseSequencesHelper(s, c, ans);
    }
}

int main_collapse_sequences() {
    string s = "mississssipppi";
    cout << collapseSequences(s, 's') << endl;
    return 0;
}
