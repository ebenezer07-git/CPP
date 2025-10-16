#include <iostream>
using namespace std;
int x = 100;
namespace MyNamespace 
{
    int value = 50;
    void show() 
    {        
        cout << "Inside MyNamespace, value = " << value << endl;
    }
}
int main() 
{
    int x = 10;
    cout << "Local x = " << x << endl;
    cout << "Global x = " << ::x << endl;
    cout << "Namespace value = " << MyNamespace::value << endl;
    MyNamespace::show();
    return 0;
}
