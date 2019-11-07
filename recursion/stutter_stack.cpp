#include <stack>
#include <iostream>
using namespace std;

void stutterStack(stack<int> & s) {
    if (s.size() == 1) {
        s.push(s.top());
    } else {
        int aux = s.top();
        s.pop();
        stutterStack(s);
        s.push(aux);
        s.push(aux);
    }
}

int main_stutter_stack() {
    stack<int> s;
    s.push(13);
    s.push(27);
    s.push(1);
    s.push(-4);
    s.push(0);
    s.push(9);

    stutterStack(s);
    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    return 0;
}
