#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<int, string> student;
    student[1] = "Alice"; student[2] = "Bob";
    student.insert({3, "Charlie"}); student.insert({4, "David"});

    for (auto &p : student) cout << p.first << " -> " << p.second << endl;

    auto it = student.find(3);
    if (it != student.end()) cout << "\nFound: " << it->first << " -> " << it->second << endl;

    student.erase(2);
    cout << "\nAfter deleting key 2:" << endl;
    for (auto &p : student) cout << p.first << " -> " << p.second << endl;

    cout << "\nSize: " << student.size() << endl;
    return 0;
}
