#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;

    cin >> n;
    int a_number = 0;
    int input = n;
    while (n > 0)
    {
        int last_digit = n % 10;

        a_number += pow(last_digit, 3);
        n = n / 10;
    }

    if (a_number == input)
    {

        cout << "armstrong number" << endl;
    }
    else
    {
        cout << " not armstrong number" << endl;
    }

    return 0;
}