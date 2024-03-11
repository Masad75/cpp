#include <iostream>
#include <vector>

using namespace std;

int get_Max(int num1, int num2, int num3)
{
    int result;

    if (num1 > num2 && num1 > num3)
    {
        result = num1;
    }
    else if (num2 > num1 && num2 > num3)
    {
        result = num2;
    }
    else if (num3 > num1 && num3 > num2)
    {
        result = num3;
    }
    return result;
}

int main()
{
    cout << get_Max(10, 50, 100);
    return 0;
}