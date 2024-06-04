// C++ program to count words in
// a string using stringstream.
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int countWords(string str)
{
    int count = 0;

    istringstream v(str);

    string word;
    while (v >> word)
    {

        count++;
    }

    return count;
}

int main()
{
    string s = "Nazmul Hasan Masad ";

    cout << " Number of words are: " << countWords(s);
    return 0;
}
