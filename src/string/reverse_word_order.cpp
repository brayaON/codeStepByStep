#include <iostream>
#include <string>
using namespace std;

string reverseWordOrder(string s) {
    static string ans = "";
    if (s.find(' ') == -1) {
        ans = s.substr(0);
        return ans;
    } else {
        int pos = s.find(' ');
        string word = "";
        string aux = "";
        word = s.substr(0, pos);
        aux = reverseWordOrder(s.substr(pos+1));
        aux = aux + " " + word;
        return aux;
    }
}

int main_reverseOrder() {
    string s = "Hello what is your name?";
    cout << reverseWordOrder(s) << endl;
    return 0;
}
