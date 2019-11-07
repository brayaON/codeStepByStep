#include <iostream>
#include <stack>
using namespace std;
int countDuplicatesHelper(stack<int> s, int ans);

int countDuplicates(stack<int> &s) {
    return countDuplicatesHelper(s, 0);
}

int countDuplicatesHelper(stack<int> s, int ans) {
    if (s.size() == 0) {
        return ans;
    } else {
        int last = s.top();
        s.pop();
        int aux = -1;
        if (s.size() > 0) {
            if (last != s.top()) {
                aux = countDuplicatesHelper(s, ans);
            } else {
                aux = countDuplicatesHelper(s, ++ans);
            }
            s.push(last);
            return aux;
        } else {
            return ans;
        }
    }
}

int main_duplicates() {
    stack<int> s;
    s.push(3);
    s.push(3);
    s.push(3);
    s.push(4);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(9);
    s.push(9);
    cout << countDuplicates(s) << endl;
    return 0;
}
