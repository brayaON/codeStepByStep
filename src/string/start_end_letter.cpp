#include <iostream>
#include <string>
using namespace std;

void startEndLetter(char c) {
    string word;
    cout << "Looking for two " << "\"" << c << "\" words in a row." << endl;
    int cont = 0;


    while (cont < 2) {
        do {
            cout << "Type a word: ";
            cin >> word;
            if ((tolower(word[0]) == c) && (tolower(word[word.length()-1]) == c)) {
                cont++;
            } else {
                cont = 0;
            }

        } while (tolower(word[0]) != c && tolower(word[word.length()-1] != c));
    }

    cout << "\"" << c << "\" is for \"" << word << "\"" << endl;
}

int main_start_end_letter() {
    startEndLetter('s');
    cout << endl;
    return 0;
}
