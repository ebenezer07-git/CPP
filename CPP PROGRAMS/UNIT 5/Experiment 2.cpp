#include <iostream>
using namespace std;

int main() {
    try {
        int choice;
        cout << "Enter 1 for int, 2 for float, 3 for string: ";
        cin >> choice;

        if (choice == 1) throw 10;
        else if (choice == 2) throw 3.14f;
        else if (choice == 3) throw "Hello";
        else throw 'X';
    }
    catch (int e) { cout << "Caught an integer exception: " << e << endl; }
    catch (float e) { cout << "Caught a float exception: " << e << endl; }
    catch (const char* e) { cout << "Caught a string exception: " << e << endl; }
    catch (...) { cout << "Caught an unknown exception!" << endl; }

    cout << "Program continues after exception handling." << endl;
    return 0;
}
