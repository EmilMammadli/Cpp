#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given two strings, write a C++ program to determine whether all the letters in the second string appear in the first string. Return true if they do, otherwise return false.
*/

int main()
{
    string text;
    string text2;
    getline(cin, text);
    getline(cin, text2);

    bool checker;

    cout << std::boolalpha;

    for (size_t i = 0; i < text2.length(); i++)
    {
        if ((text.find(text2[i]) >= 0) && (text.find(text2[i]) <= text.length()))
        {
            checker = true;
        }
        else
        {
            checker = false;
            break;
        }
    }

    cout << checker << endl;
    return 0;
}
