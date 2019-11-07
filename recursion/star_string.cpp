#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string startString(int k) {
    static string ans = "";
    if (pow(2, k) == 1) {
        return ans;
    } else {
        return startString(pow(2, k-1));
    }
}

int main_start() {
    cout << startString(4) << endl;
    return 0;
}
