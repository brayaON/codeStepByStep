#include <iostream>
#include <vector>
using namespace std;
typedef long long int lli;

lli memo[100000000] = {};

lli fact_itr(lli n) {
    int ans = 1;
    if (memo[n] == 0) {
        for (int i = 1; i <= n; i++) {
            ans *= i;
        }
        memo[n] = ans;
    }
    return memo[n];
}

lli combin(lli n, lli k) {
    if (k == 0 || k == n) {
        return 1;
    } else if (n <= 0 || k < 0 || k > n) {
        return 0;
    } else {
        return fact_itr(n) / (fact_itr(n - k) * fact_itr(k));
    }
}

int main_combin() {
    cout << combin(156, 12) << endl;
    return 0;
}
