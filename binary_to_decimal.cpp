#include <iostream>
#include <cmath>

using namespace std;

int convert(long long n)
{

    int rem;
    int i = 0;
    int dec = 0;
    while (n > 0)
    {
        rem = n % 10;
        n = n / 10;
        dec += rem * pow(2, i);
        ++i;
    }
    return dec;
}

int main()
{

    long long n;
    cout << "enter a binary number" << endl;
    cin >> n;

    cout << convert(n) << endl;

    return 0;
}