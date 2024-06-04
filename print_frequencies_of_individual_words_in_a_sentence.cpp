// C++ program to demonstrate use
// of stringstream to count
// frequencies of words.

#include <iostream>
#include <sstream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

void printFrequency(string st)
{
    unordered_map<string, int> m;

    istringstream v(st);

    string word;
    while (v >> word)
    {
        m[word]++;
    }
    for (auto s : m)
    {

        cout << s.first << " :" << s.second << endl;
    }
}

// Driver code
int main()
{
    string s = "Geeks For Geeks Ide";
    printFrequency(s);
    return 0;
}
