#include <iostream>

using namespace std;

int main()
{

    /*for (int i = 0; i < 50; i++)
    {

        cout << i << endl;
    } */

    int n;
    cin >> n;

    /* while (n > 0)
    {
        cout << n << endl;
        cin >> n;
    } */

    do
    {
        cout << n << endl;
        cin >> n;

    } while (n > 0);

    return 0;
}