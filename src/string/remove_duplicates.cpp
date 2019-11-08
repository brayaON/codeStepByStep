#include <iostream>
#include <string>
using namespace std;

string removeDuplicates(string s) {
    char last = s[0];
    string ans = "";
    ans += last;
    for (int i = 1; i < (int)s.length(); ++i) {
        if (s[i] != last) {
            ans += s[i];
            last = s[i];
        }
    }

    return ans;
}

int main_remove() {
    string s = "bookkeeeeeper";
    cout << removeDuplicates(s) << endl;
    return 0;
}
