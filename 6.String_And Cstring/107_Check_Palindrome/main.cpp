#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given a string, write a C++ program to determine whether it is a palindrome. A palindrome is a word, number, phrase, or sequence of characters that reads the same backward as forward.
*/

int main()
{
    string text;

    getline(cin, text);

    bool checker;

    cout << std::boolalpha;

    int length = text.length();

    for (size_t i = 0; i < length; i++)
    {
        if (text[i] == text[(length - 1) - i])
        {
            checker = true;
        }
        else
        {
            checker = false;
            break;
        }
    }

    if (checker == true)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
    return 0;
}
