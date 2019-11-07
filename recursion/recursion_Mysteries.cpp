#include <iostream>
#include <string>
using namespace std;

string & toUpperCase(string &str);

void fun_mystery7(string s) {
    if (s.length() <= 1) {
        cout << s;
    } else {
        string first = s.substr(0, 1);
        string last = s.substr(s.length() - 1, 1);
        string mid = s.substr(1, s.length() - 2);
        if (first < last) {
            fun_mystery7(mid);
            cout << last << toUpperCase(first);
        } else {
            cout << "[" << first << "]";
            fun_mystery7(mid);
            cout << last;
        }
    }
}

void fun_mystery8(int n) {
    if (n <= 1) {
        cout << n;
    } else {
        cout << n << " = (";
        fun_mystery8(n / 2 + n % 2);
        cout << ", ";
        fun_mystery8(n / 2);
        cout << ")";
    }
}

int fun_mystery9(int x, int y) {
    if (x < 0) {
        return -fun_mystery9(-x, y);
    } else if (y < 0) {
        return -fun_mystery9(x, -y);
    } else if (x == 0 && y == 0) {
        return 0;
    } else {
        return 100 * fun_mystery9(x / 10, y / 10)  + 10 * (x % 10) + y % 10;
    }

}

void fun_mystery10(int x) {
    cout << x << " ";
    if (x <= 1) {
        cout << "END ";
    } else if (x % 2 == 0) {
        fun_mystery10(x / 2);
        cout << "+ ";
    } else {
        cout << "[ ";
        fun_mystery10(3 * x + 1);
        cout << "] ";
    }
}

void fun_mystery11(int x) {
    if (x < 10) {
        cout << "[" << x << "]";
    } else {
        cout << x << " ( ";
        fun_mystery11(x / 2);
        cout << " , ";
        fun_mystery11(x % 2);
        cout << " ) ";
    }
}

void fun_mystery12(int n) {
    if (n == 0) {
        cout << " * " << n;
    } else {
        int a = n % 10;
        if (a % 2 == 0) {
            cout << " + (" << a;
            fun_mystery12(n / 10);
            cout << ")";
        } else {
            fun_mystery12(n / 10);
            cout << " - " << a;
        }
    }
}

void fun_mystery13(int x, int y) {
    if (x <= 0 && y <= 0) {
        cout << ":";
    } else {
        cout << y % 10;
        fun_mystery13(x / 10, y / 10);
        cout << x % 10;
        cout << x % 10;
    }
}

int fun_mystery_minus(int x, int y) {
    if (x < y) {
        return x;
    } else {
        return fun_mystery_minus(x - y, y);
    }
}

int main_mysteries() {
    int x = 27153, y = 604;
    cout << fun_mystery_minus(x, y);
    cout << endl;
    return 0;
}
