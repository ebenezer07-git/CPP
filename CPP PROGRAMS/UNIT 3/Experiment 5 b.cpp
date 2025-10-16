#include <iostream>
using namespace std;
class Box {
    int length;
public:
    void setLength(int l) { length = l; }
    void showLength() { cout << "Length: " << length << endl; }
};
int main() {
    Box b1;
    Box *ptr = &b1;
    ptr->setLength(15);
    ptr->showLength();
    return 0;
}
