#include <iostream>
#include <string>
using namespace std;

string converToAltCaps(string s) {
    int flag = true;
    for (int i = 0; i < (int)s.length(); ++i) {
        if (flag && s[i] != ' ') {
            s[i] = tolower(s[i]);
            flag = !flag;
        } else if (s[i] != ' '){
            s[i] = toupper(s[i]);
            flag = !flag;
        }
    }
    return s;
}

int main_convert_to(int argc, char *argv[])
{
    string s = "Summer is here!";
    cout << converToAltCaps(s) << endl;
    return 0;
}
