#include <iostream>

using namespace std;

int expontFunction(int baseNum, int powerNum)
{
    int result = 1;
    for (int i = 0; i < powerNum; i++)
    {
        result = result * baseNum;
    }
    return result;
}
int main()
{
    cout << expontFunction(100, 3);

    return 0;
}