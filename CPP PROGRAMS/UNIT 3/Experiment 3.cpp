#include <iostream>
using namespace std;

// --- Single Inheritance ---
class A {
public:
    void displayA() {
        cout << "Class A Function" << endl;
    }
};

class B : public A {
public:
    void displayB() {
        cout << "Class B Function (inherits from A)" << endl;
    }
};

// --- Multiple Inheritance ---
class X {
public:
    void displayX() {
        cout << "Class X Function" << endl;
    }
};

class Y {
public:
    void displayY() {
        cout << "Class Y Function" << endl;
    }
};

class Z : public X, public Y {
public:
    void displayZ() {
        cout << "Class Z Function (inherits from X and Y)" << endl;
    }
};

// --- Multi-level Inheritance ---
class Parent {
public:
    void displayParent() {
        cout << "Parent Class Function" << endl;
    }
};

class Child : public Parent {
public:
    void displayChild() {
        cout << "Child Class Function (inherits from Parent)" << endl;
    }
};

class GrandChild : public Child {
public:
    void displayGrandChild() {
        cout << "GrandChild Function (inherits from Child)" << endl;
    }
};

// --- Hierarchical Inheritance ---
class Base {
public:
    void displayBase() {
        cout << "Base Class Function" << endl;
    }
};

class Derived1 : public Base {
public:
    void displayDerived1() {
        cout << "Derived1 Function (inherits from Base)" << endl;
    }
};

class Derived2 : public Base {
public:
    void displayDerived2() {
        cout << "Derived2 Function (inherits from Base)" << endl;
    }
};

// --- Hybrid Inheritance ---
class M {
public:
    void displayM() {
        cout << "Class M Function" << endl;
    }
};

class N : virtual public M {
public:
    void displayN() {
        cout << "Class N Function (virtually inherits from M)" << endl;
    }
};

class O : virtual public M {
public:
    void displayO() {
        cout << "Class O Function (virtually inherits from M)" << endl;
    }
};

class P : public N, public O {
public:
    void displayP() {
        cout << "Class P Function (inherits from N and O)" << endl;
    }
};

// --- main() ---
int main() {
    cout << "\n--- Single Inheritance ---" << endl;
    B b;
    b.displayA();
    b.displayB();

    cout << "\n--- Multiple Inheritance ---" << endl;
    Z z;
    z.displayX();
    z.displayY();
    z.displayZ();

    cout << "\n--- Multi-level Inheritance ---" << endl;
    GrandChild gc;
    gc.displayParent();
    gc.displayChild();
    gc.displayGrandChild();

    cout << "\n--- Hierarchical Inheritance ---" << endl;
    Derived1 d1;
    Derived2 d2;
    d1.displayBase();
    d1.displayDerived1();
    d2.displayBase();
    d2.displayDerived2();

    cout << "\n--- Hybrid Inheritance ---" << endl;
    P p;
    p.displayM();
    p.displayN();
    p.displayO();
    p.displayP();

    return 0;
}
