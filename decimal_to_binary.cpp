#include <iostream>

using namespace std;

int convert(int n)
{
    int r;
    int binaryNum[32];

    int i = 0;
    while (n > 0)
    {
        r = n % 2;
        binaryNum[i] = r;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {

        cout << binaryNum[j];
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