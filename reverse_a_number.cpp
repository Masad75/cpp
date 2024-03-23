#include <iostream>
using namespace std;
int main()
{
    int n, last_digit;

    cin >> n;
    int reverse_number = 0;
    while (n > 0)
    {

        last_digit = n % 10;

        reverse_number = (reverse_number * 10) + last_digit;
        n = n / 10;
    }

    cout << reverse_number << endl;
    return 0;
}