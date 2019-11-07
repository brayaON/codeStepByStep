#include <iostream>

using namespace std;

class Kurt {
public:
    virtual void a() {
        cout << "K A" << endl;
        c();
    }

    virtual void c() {
        cout << "K C" << endl;
    }
};

class Eddie : public Kurt{
public:
    virtual void b() {
        a();
        cout << "E B" << endl;
    }

    virtual void c() {
        cout << "E C" << endl;
    }
};

class Jerry : public Kurt {
public:
    virtual void a() {
        cout << "J A" << endl;
    }

    virtual void c() {
        cout << "J C" << endl;
        Kurt::c();
    }
};

class Chris : public Jerry {
public:
    /*
    virtual void b() {
        a();
        cout << "C B" << endl;
    }
    */

    virtual void c() {
        cout << "C C" << endl;
        Jerry::c();
    }

    virtual void d() {
        cout << "C D" << endl;
        c();
    }
};


int main_mistery() {
    Kurt* var1 = new Jerry();
    Jerry* var2 = new Chris();
    Kurt* var3 = new Eddie();
    Kurt* var4 = new Chris();
    Kurt* var5 = new Kurt();

    //var3->b();
    return 0;
}

















