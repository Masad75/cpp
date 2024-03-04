#include <iostream>

using namespace std;

int main()
{

    string name;
    cout << "your pet name" << endl;
    getline(cin, name);
    cout << "hello"
         << "  " << name << endl;
    return 0;
}
