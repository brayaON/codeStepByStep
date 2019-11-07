#include <iostream>
#include <ios>
#include <string>
using namespace std;

void nameDiamond(string s) {
    int cont = 1;
    while (cont < 2 * (int) s.length()) {
        if (cont <= (int) s.length()) {
            for (int i = 0; i < cont; ++i) {
                cout << s[i];
            }
        } else {
            int tam = cont - (int)s.length();
            for (int i = 0; i < tam; ++i) {
                cout << " ";
            }
            for (int i = tam; i < (int) s.length(); ++i) {
                cout << s[i];
            }
        }
        cout << endl;
        cont = cont + 1;
    }
}

int main_name_diamond() {
    string s = "BRAYAN";
    nameDiamond(s);
    return 0;
}
