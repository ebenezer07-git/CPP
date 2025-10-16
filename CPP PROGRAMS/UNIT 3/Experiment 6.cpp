#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Display from Base class" << endl;
    }
};

class Derived1 : public Base {
public:
    void display() override {
        cout << "Display from Derived1 class" << endl;
    }
};

class Derived2 : public Base {
public:
    void display() override {
        cout << "Display from Derived2 class" << endl;
    }
};

int main() {
    Base* basePtr;
    Base b;
    Derived1 d1;
    Derived2 d2;

    basePtr = &b;
    basePtr->display();

    basePtr = &d1;
    basePtr->display();

    basePtr = &d2;
    basePtr->display();

    return 0;
}
