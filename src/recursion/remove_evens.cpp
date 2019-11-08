#include <iostream>
#include <stack>
#include <string>
using namespace std;

int remove_evens_helper(stack<int> &s, int k, int ans);

int remove_evens(stack<int> &s, int k) {
    if (k > 0) {
        return remove_evens_helper(s, k, 0);
    } else {
        return 0;
    }
}

int remove_evens_helper(stack<int> &s, int k, int ans) {
    if (k == 0 || s.size() == 0) {
        return ans;
    } else {
        int aux = s.top();
        s.pop();
        if (aux % 2 == 0) {
            k--;
            ans++;
            return remove_evens_helper(s, k, ans);
        } else {
            int ans2 = remove_evens_helper(s, k, ans);
            s.push(aux);
            return ans2;
        }
    }
}

int main_remove_evens() {
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(5);
    s.push(7);
    s.push(9);
    cout << remove_evens(s, 1) << endl;

    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    return 0;
}
