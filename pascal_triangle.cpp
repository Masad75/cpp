#include <iostream>
using namespace std;
int fact(int n)
{
    int factorial = 1;
    for (int i = n; i >= 1; i--)
    {
        factorial = i * factorial;
    }
    return factorial;
}
int iCj(int i, int j)
{
    int iCj = fact(i) / (fact(i - j) * fact(j));
    return iCj;
}
int main()
{
    int row;
    cin >> row;
    for (int i = 0; i <= row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << iCj(i, j) << " ";
        }
        cout << endl;
    }
    return 0;
}