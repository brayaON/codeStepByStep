#include <iostream>
#include <string>
using namespace std;

string repeat(string s, int n) {
    string ans = "";
    while (n--) {
        ans += s;
    }
    return ans;
}

int main_repeat() {
    string s = "hello";
    int n = 3;
    cout << repeat(s, n) << endl;
    return 0;
}
