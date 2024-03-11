#include <iostream>
using namespace std;

string getDay(int dayNum)
{
    string dayName;

    switch (dayNum)
    {
    case 0:
        dayName = "Saturday";
        break;
    case 1:
        dayName = "Sunday";
        break;
    case 2:
        dayName = "Monday";
        break;
    case 3:
        dayName = "Tuesday";
        break;
    case 4:
        dayName = "Wednesday";
        break;
    case 5:
        dayName = "Thursday";
        break;
    case 6:
        dayName = "Friday";
        break;

    default:
        dayName = "Invalid";
    }
    return dayName;
}

int main()
{
    cout << getDay(5);
    return 0;
}
