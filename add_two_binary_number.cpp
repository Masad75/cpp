#include <iostream>

using namespace std;

int reverse(int n)
{

    int ans = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        ans = ans * 10 + lastDigit;
        n = n / 10;
    }
    return ans;
}

int addBinary(int n1, int n2)
{

    int sum = 0;
    int carry = 0;

    while (n1 > 0 && n2 > 0)
    {

        if (n1 % 2 == 0 && n2 % 2 == 0)
        {
            sum = sum * 10 + carry;
            carry = 0;
        }
        else if ((n1 % 2 == 1 && n2 % 2 == 0) || (n1 % 2 == 0 && n2 % 2 == 1))
        {
            if (carry == 1)
            {

                sum = sum * 10 + 0;
                carry = 1;
            }
            else
            {
                sum = sum * 10 + 1;
                carry = 0;
            }
        }
        else
        {
            sum = sum * 10 + carry;
            carry = 1;
        }

        n1 = n1 / 10;
        n2 = n2 / 10;
    }

    while (n1 > 0)
    {
        if (n1 % 2 == 1)
        {
            if (carry == 1)
            {
                sum = sum * 10 + 0;
                carry = 1;
            }
            else
            {
                sum = sum * 10 + 1;
                carry = 0;
            }
        }
        else
        {
            sum = sum * 10 + (n1 % 2);
            n1 = n1 / 10;
        }
    }

    while (n2 > 0)
    {
        if (n2 % 2 == 1)
        {
            if (carry == 1)
            {
                sum = sum * 10 + 0;
                carry = 1;
            }
            else
            {
                sum = sum * 10 + 1;
                carry = 0;
            }
        }
        else
        {
            sum = sum * 10 + (n2 % 2);
            n1 = n1 / 10;
        }
    }

    if (carry == 1)
    {

        sum = sum * 10 + 1;
    }

    sum = reverse(sum);
    return sum;
}

int main()
{
    int n1, n2;
    cout << "Enter two binary numbers" << endl;

    cin >> n1 >> n2;

    cout << addBinary(n1, n2) << endl;

    return 0;
}