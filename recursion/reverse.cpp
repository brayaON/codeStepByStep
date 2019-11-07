#include <iostream>
#include <string>
using namespace std;

string reverseHelper(string str, string ans);

string reverse(string str) {
    return reverseHelper(str, "");
}

string reverseHelper(string str, string ans) {
    if (str.length() == 0) {
        return "";
    } else {
        char letter = str[0];
        str = str.substr(1, str.length());
        ans += reverseHelper(str, ans) + letter;
        return ans;
    }
}

int main_reverse() {
    cout << reverse("Hi you!") << endl;
    return 0;
}
