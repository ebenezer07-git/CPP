#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;
    dq.push_back(10); dq.push_back(20); dq.push_front(5);

    cout << "Deque elements: ";
    for (int x : dq) cout << x << " ";
    cout << endl;

    cout << "Front: " << dq.front() << ", Back: " << dq.back() << endl;

    dq.pop_front(); dq.pop_back();
    cout << "After deletion: ";
    for (int x : dq) cout << x << " ";
    cout << endl;

    dq.push_front(100); dq.push_back(200);
    cout << "Deque final state: ";
    for (int x : dq) cout << x << " ";
    cout << endl;

    return 0;
}
