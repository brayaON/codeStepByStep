#include <iostream>
using namespace std;

int digitSumHelper(int n, int sum);

int digitSum(int n) {
    return digitSumHelper(n, 0);
}

int digitSumHelper(int n, int sum) {
    if (n == 0) {
        return sum;
    } else if ( n < 0) {
        return -digitSumHelper(-n, sum);
    } else {
        int last = n % 10;
        n = n / 10;
        sum += last;
        return digitSumHelper(n, sum);
    }
}

int main_digit_sum() {
    cout << digitSum(-1729) << endl;
    return 0;
}
