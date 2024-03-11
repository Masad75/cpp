#include <iostream>

using namespace std;

int main()
{
    int pocketMoney = 3000;

    for (int i = 1; i <= 30; i++)
    {

        if (i % 2 == 0)
        {
            continue;
        }

        if (pocketMoney == 0)
        {

            break;
        }

        cout << "Give the mone to her" << endl;
    }

    return 0;
}