#include <iostream>
using namespace std;
class Number {
private:
    int value;
public:
    Number(int v = 0) {
        value = v;
    }

    void operator++() {
        ++value;
    }

    Number operator+(Number obj) {
        Number temp;
        temp.value = value + obj.value;
        return temp;
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};
int main() {
    Number n1(5), n2(10), n3;
    cout << "Before Unary Operation:" << endl;
    n1.display();

    ++n1;
    cout << "After Unary Operation (++n1):" << endl;
    n1.display();

    n3 = n1 + n2;
    cout << "After Binary Operation (n1 + n2):" << endl;
    n3.display();

    return 0;
}
