#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{

    int a = 10;
    int *aptr = &a;
    *aptr = 20;

    cout << aptr << endl;
    cout << a << endl;

    aptr++;

    cout << aptr << endl;

    aptr++;

    cout << aptr << endl;

    char c = 'a';

    char *cptr = &c;
    cout << cptr << endl;

    // printing array with pointers.

    int arr[] = {10, 20, 30};

    cout << *arr << endl;
    int *ptr = arr;
    for (int i = 0; i < 3; i++)
    {
        cout << *ptr << endl;
        ptr++;
    }

    // pointers to pointers

    int b = 10;

    int *p = &b;

    cout << *p << endl;
    cout << p << endl;

    int **q = &p;

    cout << *q << endl;

    cout << **q << endl;

    // ponters to function

    int s = 2;
    int aa = 8;

    int *sptr = &s;
    int *aaptr = &aa;

    swap(sptr, aaptr);

    cout << s << " " << aa << endl;

    return 0;
}