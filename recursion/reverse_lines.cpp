#include <fstream>
#include <string>
#include <iostream>
using namespace std;

void reverseLines(ifstream & ifs) {
    if (ifs.fail()) {
        cout << "";
    } else {
        string line;
        getline(ifs, line);
        reverseLines(ifs);
        cout << line;
    }
}

int main_reverse_lines() {

    return 0;
}
