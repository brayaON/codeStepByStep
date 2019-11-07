#include <iostream>
#include <string>
using namespace std;

int evaluateMathExpressionHelper(string s, int ans);
int evaluateMathExpression(string s) {
    return evaluateMathExpressionHelper(s, 0);
}

int evaluateMathExpressionHelper(string s, int ans) {
    if (s.length() == 0) {
        return ans;
    }
}

int main_evaluate() {
    string s = "(4*4)+(4+4)";
    cout << evaluateMathExpression(s) << endl;
    return 0;
}
