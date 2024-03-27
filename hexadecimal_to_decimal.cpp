#include <bits/stdc++.h>
using namespace std;
int convert(string n)
{
    int dec = 0;
    int base = 1;
    int length = n.size();
    for (int i = length - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            dec += base * (n[i] - '0');
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            dec += base * (n[i] - 'A' + 10);
        }
        base *= 16;
    }
    return dec;
}

int main()
{

    string n;
    cout << "enter a hexadecimal number" << endl;
    cin >> n;

    cout << convert(n) << endl;

    return 0;
}