#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[10];

    while (n > 0)
    {
        int last_digit = n % 10;

        cout << last_digit << endl;

        n = n / 10;
    }

    return 0;
}