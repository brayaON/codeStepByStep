#include <iostream>
using namespace std;

int countWords(string s) {
    if (s.length() > 0) {
        int cont = 0;
        for (int i = 0; i < (int)s.length(); ++i) {
            if (s[i] == ' ') {
                while (s[i] == ' ') {
                    ++i;
                }
                if (i != 0 && i != s.length()) {
                    cout << i << endl;
                    ++cont;
                }
            }
        }
        return ++cont;
    }
    return 0;
}

int main_count() {
    string s = "how are you?";
    cout << countWords(s) << endl;
    return 0;
}
