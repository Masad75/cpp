#include <iostream>

using namespace std;

int convert(int n)
{
    int r;
    int octalNum[32];

    int i = 0;
    while (n > 0)
    {
        r = n % 8;
        octalNum[i] = r;
        n = n / 8;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {

        cout << octalNum[j];
    }
}

int main()
{

    int n;
    cout << "enter a decimal number" << endl;
    cin >> n;
    convert(n);

    return 0;
}