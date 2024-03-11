#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    cin >> a;
    cin >> b;

    for (int num = a; num <= b; num++)
    {
        int flag = 1;

        if (num == 1 || num == 0)
        {

            continue;
        }
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
        {

            cout << num << endl;
        }
    }

    return 0;
}