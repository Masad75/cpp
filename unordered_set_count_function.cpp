#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    unordered_set<int> s;
    s.insert(5);
    s.insert(10);
    s.insert(15);
    s.insert(20);
    s.insert(25);

    if (s.count(20) == 1)
    {
        cout << "is avalable" << endl;
    }
    else
    {

        cout << " is not available" << endl;
    }

    return 0;
}