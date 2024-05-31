#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main()
{
    char arr[100] = "apple";

    int i = 0;
    while (arr[i] != '\0')
    {
        cout << arr[i] << endl;
        i++;
    }

    cin >> arr;
    cout << arr[3];

    return 0;
}
