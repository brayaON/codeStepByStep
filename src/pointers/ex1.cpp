#include <iostream>

using namespace std;

int main_ex1() {
    int v1 = 10;
    int v2 = 25;
    int* p1 = &v1;
    int* p2 = &v2;

    *p1 += *p2;
    p2 = p1;
    *p2 = *p1 + *p2;

    cout << v1 << " " << v2 << endl;
    cout << *p1 << " " << *p2 << endl;
    return 0;
}

