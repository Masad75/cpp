#include <iostream>
#include <vector>

using namespace std;
int understandingVector()
{
    vector<int> g1;
    for (int i = 0; i <= 5; i++)
    {
        g1.push_back(i * 100);
    }
    cout << "begin and end" << endl;
    for (auto i = g1.begin(); i != g1.end(); ++i)
    {
        cout << *i << " ";
    }

    cout << "\nrbegin and rend" << endl;
    for (auto i = g1.rbegin(); i != g1.rend(); ++i)
    {
        cout << *i << "  ";
    }
    cout << "size : " << g1.size();

    cout << "\ncapacity :" << g1.capacity();

    g1.resize(4);

    cout << " size : " << g1.size();

    if (g1.empty() == true)
    {

        cout << "\nvector is empty";
    }
    else
    {
        cout << "\nVector is not empty" << endl;
    }

    g1.shrink_to_fit();

    cout << g1[3] << endl;
    cout << g1.at(2) << endl;
    cout << g1.front() << endl;
    cout << g1.back() << endl;

    int *pos = g1.data();

    cout << *pos << endl;

    g1.assign(5, 10);
    g1.push_back(15);

    cout << "begin and end" << endl;
    for (auto i = g1.begin(); i != g1.end(); ++i)
    {
        cout << *i << " ";
    }
    int n = g1.size();
    cout << "\nThe last element " << g1.at(n - 1);

    g1.pop_back();

    cout << "\nbegin and end" << endl;
    for (auto i = g1.begin(); i != g1.end(); ++i)
    {
        cout << *i << " ";
    }

    g1.insert(g1.begin(), 5);

    cout << "\nbegin and end" << endl;
    for (auto i = g1.begin(); i != g1.end(); ++i)
    {
        cout << *i << " ";
    }
    g1.push_back(15);

    cout << "\nbegin and end" << endl;
    for (auto i = g1.begin(); i != g1.end(); ++i)
    {
        cout << *i << " ";
    }

    g1.erase(g1.begin());

    g1.clear();

    cout << "\nbegin and end" << endl;
    for (auto i = g1.begin(); i != g1.end(); ++i)
    {
        cout << *i << " ";
    }

    vector<int> m1 = {1, 2, 3, 4};
    vector<int> m2 = {5, 6, 7, 8};

    m1.swap(m2);

    cout << "\nbegin and end" << endl;
    for (auto i = m1.begin(); i != m1.end(); ++i)
    {
        cout << *i << " ";
    }
}

int main()
{

    understandingVector();

    return 0;
}
