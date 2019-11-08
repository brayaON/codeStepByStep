#include <iostream>
#include <string>
using namespace std;

int editDistanceHelper(string s1, string s2, int ans);

int editDistance(string s1, string s2) {
    return editDistanceHelper(s1, s2, 0);
}

int editDistanceHelper(string s1, string s2, int ans) {
    int costo;
    if (s1.length() == 0) return s2.length();
    if (s2.length() == 0) return s1.length();

    if (s1[s1.length() - 1] == s2[s2.length() - 1]) {
        costo = 0;
    } else {
        costo = 1;
    }

    int a1 = editDistanceHelper(s1.substr(0, s1.length()-1), s2, ans) + 1;
    int a2 = editDistanceHelper(s1, s2.substr(0, s2.length() - 1), ans) + 1;
    int a3 = editDistanceHelper(s1.substr(0, s1.length()-1), s2.substr(0, s2.length() - 1), ans) + costo;

    return min(a3, min(a1, a2));
}

int main_edit_distance() {
    cout << editDistance("football", "cookies") << endl;
    return 0;
}
