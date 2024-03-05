#include <iostream>
using namespace std;
int main()
{

    int a = 10;

    cout << "size of int" << sizeof(a) << endl;

    float b = 3.1416;
    cout << "size of float " << sizeof(b) << endl;

    char c = 'a';
    cout << "ascii  value " << (int)c << endl;

    wchar_t w = L'a';
    cout << "Wide character value:: " << w << endl;
    cout << "Size of the wide char is:: " << sizeof(w) << endl;

    short int si;
    long int li;

    cout << "size of short int " << sizeof(si) << endl;
    cout << "size of long int " << sizeof(li) << endl;
    return 0;
}
