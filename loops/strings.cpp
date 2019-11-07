#include <iostream>
#include <string>
using namespace std;

string & toUpperCase(string & str) {
    for (int i = 0; i < str.length(); ++i) {
        str[i] = toupper(str[i]);
    }

    return str;
}
