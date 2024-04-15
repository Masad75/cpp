#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{

    unordered_set<string> s;

    s.insert("code");
    s.insert("in ");
    s.insert("c++");
    s.insert("is fast");

    string key = "slow";

    if (s.find(key) == s.end())
    {
        cout << key << "not found" << endl;
    }
    else
    {

        cout << key << "found" << endl;
    }
    key = "is fast";

    if (s.find(key) == s.end())
    {
        cout << key << "not found" << endl;
    }
    else
    {

        cout << key << "found" << endl;
    }

    unordered_set<string>::iterator it;
    for (it = s.begin(); it != s.end(); it++)
    {

        cout << *it << endl;
    }
    return 0;
}