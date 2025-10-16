#include <iostream>
using namespace std;

void greet(string name = "Guest", int times = 1)
{
    for (int i = 0; i < times; i++) {
        cout << "Hello, " << name << "!" << endl;
    }
}

class DemoAccess {
private:
    int privateValue = 100;

protected:
    int protectedValue = 200;

public:
    int publicValue = 300;

    void showValues() {
        cout << "Private Value: " << privateValue << endl;
        cout << "Protected Value: " << protectedValue << endl;
        cout << "Public Value: " << publicValue << endl;
    }
};

int main()
{
    greet();
    greet("Anil");
    greet("Ravi", 3);

    DemoAccess obj;
    obj.showValues();
    cout << "Direct Access to Public Value: " << obj.publicValue << endl;

    return 0;
}


