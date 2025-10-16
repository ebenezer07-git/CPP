#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(10); v.push_back(20); v.push_back(30);

    cout << "Vector elements: ";
    for (int i : v) cout << i << " ";
    cout << "\nSize: " << v.size() << ", Capacity: " << v.capacity() << endl;

    v.pop_back();
    cout << "After pop_back, Vector elements: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    list<int> l;
    l.push_back(100); l.push_front(50); l.push_back(150);

    cout << "\nList elements: ";
    for (int x : l) cout << x << " ";

    l.remove(100);
    cout << "\nAfter removing 100, List elements: ";
    for (int x : l) cout << x << " ";
    cout << endl;

    return 0;
}
