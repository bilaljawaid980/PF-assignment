#include <iostream>
using namespace std;

// Q-14
// Take two strings (one is initialized and other take input at run-time), compare the
// string are they same or not and print them in reverse without using built in function.

int main()
{
    string strOne = "Programming", strTwo;

    cout << "Enter a sentece: ";
    getline(cin, strTwo);

    int length = 0;

    for (int i = 0; strOne[i] != '\0'; i++)
    {
        length++;
    }

    if (strOne == strTwo)
    {
        cout << "Both strings are same";
    }
    else
    {
        cout << "Strings are not same";
    }

    for (int i = length - 1; i >= 0; i--)
    {
        cout << strOne[i];
    }
}
