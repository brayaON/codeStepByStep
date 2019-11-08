#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

bool isRotation(string s, string t) {
    if (s.length() == 0 && t.length() == 0) {
        return true;
    } else {
        bool flag = false;
        for (int i = 0; i <= (int)s.length(); ++i) {
            rotate(s.begin(), s.begin() + i, s.end());
            if (s == t) {
                flag = true;
                break;
            }
        }

        for (int i = 0; i <= (int)t.length(); ++i) {
            rotate(t.begin(), t.begin() + i, t.end());
            if (t == s) {
                flag = true;
                break;
            }
        }
        return flag ? true : false;
    }
}

int main_rotation() {
    string s = "543210", t = "054321";
    cout << isRotation(s, t) << endl;
    return 0;
}
