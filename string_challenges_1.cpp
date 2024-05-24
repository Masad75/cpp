#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s = "asdkhja";

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] -= 32;
        }
    }

    cout << s << endl;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
        }
    }

    cout << s << endl;

    // built in function

    transform(s.begin(), s.end(), s.begin(), ::toupper);

    cout << s << endl;

    return 0;
}