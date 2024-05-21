#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    string s1(5, 'm');
    cout << s1 << " " << endl;

    string s2;
    getline(cin, s2);
    cout << s2 << endl;

    s1.append(s2);
    cout << s1 + s2;

    string s3 = "Masad";
    cout << s3[4] << endl;

    s3.clear();

    string s4 = "nincompoop";
    string s5 = "xyz";
    cout << s5.compare(s4) << endl;

    if (s4.compare(s5) == 0)
    {
        cout << "strings are equal" << endl;
    }

    s5.clear();
    if (s5.empty())
    {
        cout << "s5 is empty" << endl;
    }

    if (!s4.empty())
    {
        cout << "strings is not empty" << endl;
    }

    s4.erase(3, 2);
    cout << s4 << endl;

    cout << s4.find("poop") << endl;

    s4.insert(4, "loop");
    cout << s4 << endl;

    cout << s4.length() << endl;

    for (int i = 0; i < s4.length(); i++)
    {
        cout << s4[i] << endl;
    }

    cout << s4.substr(6, 4);

    string s6 = "786";
    int x = stoi(s6);

    cout << x + 2 << endl;

    int z = 786;

    cout << to_string(z) + "2" << endl;

    string s7 = "akjfozcjWEJCFlEASsebnLVblvl";

    sort(s7.begin(), s7.end());
    cout << s7 << endl;

    return 0;
}