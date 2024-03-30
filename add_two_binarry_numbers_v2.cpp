#include <iostream>
using namespace std;
int addBinary(long int n1, long int n2)
{
    int i = 0, carry = 0, sum[16];

    while (n1 != 0 || n2 != 0)
    {
        sum[i++] = (n1 % 10 + n2 % 10 + carry) % 2;
        carry = (n1 % 10 + n2 % 10 + carry) / 2;
        n1 = n1 / 10;
        n2 = n2 / 10;
    }

    if (carry == 1)
    {
        sum[i++] = carry;
    }
    i--;

    while (i >= 0)
    {
        cout << sum[i--];
    }
    return 0;
}

int main()
{
    long int n1, n2;
    cin >> n1 >> n2;
    addBinary(n1, n2);

    return 0;
}