#include <iostream>
using namespace std;

class Mouth  {
public:
    virtual void m1() {
        cout << "M 1" << endl;
    }

    virtual void m2() {
        cout << "M 2" << endl;
        m1();
    }
};

class Tongue : public Mouth {
public:
    virtual void m1() {
        cout << "T 1" << endl;
        Mouth::m1();
    }

    virtual void m3() {
        cout << "T 3" << endl;
    }
};

class Nose : public Tongue {
public:
    virtual void m1() {
        cout << "N 1" << endl;
    }

    virtual void m2() {
        Tongue::m2();
        cout << "N 2" << endl;
    }

    virtual void m3() {
        cout << "N 3" << endl;
    }
};

int main_mist() {
    Mouth* var1 = new Nose();
    var1->m2();
    return 0;
}
