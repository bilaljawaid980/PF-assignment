#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string bilal;
    cout << "Enter something in STRING BILAL: ";
    cin >> bilal;
    int flag = 1;

    int length = bilal.length();

    for (int i = 0; i < length; i++)
    {
        if (bilal[i] != bilal[length - 1 - i])
        {
            flag = 0;
            break;
        }
    }

    if (flag == 0)
    {
        cout << "Is not palindrome";
    }
    else
    {
        cout << "Is palindrome";
    }
}
