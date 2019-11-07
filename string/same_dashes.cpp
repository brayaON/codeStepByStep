#include <iostream>
#include <cmath>
#include <string>
using namespace std;

bool sameDashes(string s, string t) {
    bool flag = true;
    if (s.length() > t.length()) {
        for (int i = 0; i < (int) s.length(); ++i) {
            if ((s[i] == '-' && t[i] != '-') || (s[i] == '-' && i >= (int)t.length())) {
                flag = false;
                break;
            }
        }
    } else {
        for (int i = 0; i < (int) t.length(); ++i) {
            if ((s[i] == '-' && t[i] != '-') || (t[i] == '-' && i >= (int)s.length())) {
                flag = false;
                break;
            }
        }
    }

    return flag;
}

int main_dashes() {
    string s = "1st-has-more-characters", t = "2nd-has-less";
    cout << sameDashes(s, t) << endl;
    return 0;
}
