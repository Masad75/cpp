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

int main()
{
    int n, r;
    cin >> n >> r;

    int nCr = fact(n) / (fact(n - r) * fact(r));

    cout << nCr << endl;

    return 0;
}