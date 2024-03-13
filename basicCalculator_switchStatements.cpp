#include <iostream>

using namespace std;

int main()
{

    int num1, num2;
    cout << "input 2 numbers" << endl;
    cin >> num1 >> num2;
    char op;
    cin >> op;
    switch (op)
    {
    case '+':
        cout << num1 + num2 << endl;
        break;

    case '-':
        cout << num1 - num2;
        break;

    case '*':
        cout << num1 * num2 << endl;
        break;

    case '/':
        cout << num1 / num2 << endl;

    default:
        cout << "enter another operator" << endl;
    }

    return 0;
}