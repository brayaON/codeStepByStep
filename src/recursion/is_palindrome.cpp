#include <iostream>

using namespace std;
typedef unsigned long ul;
void convert(string &s);
bool isSubstringPalindrome(string str, int p1, int p2);

bool isPalindrome_v1(string s) {
    ul tam = s.length();
    if (tam == 1) return true;
    else {
        char first = tolower(s[0]);
        char last = tolower(s[tam-1]);
        if (first == last) {
            s = s.substr(1, tam - 2);
            return isPalindrome_v1(s);
        }
        else {
            return false;
        }
    }
}

bool isPalindrome_v2(string str) {
    return isSubstringPalindrome(str, 0, str.length() - 1);
}

bool isSubstringPalindrome(string str, int p1, int p2) {
    if (p1 >= p2) {
        return true;
    } else {
        return str[p1] == str[p2] && isSubstringPalindrome(str, p1 + 1, p2 - 1);
    }
}

int main_palindrome() {
    string s;
    cin >> s;
    if(isPalindrome_v2(s)) {
        cout << "sí" << endl;
    } else {
        cout << "no" << endl;
    }
    return 0;
}
