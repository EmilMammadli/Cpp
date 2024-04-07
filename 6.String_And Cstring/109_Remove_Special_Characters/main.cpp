#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given a string containing alphanumeric characters and special characters, write a C++ program to remove all the special characters from the string.
*/

int main()
{
    string text;
    getline(cin, text);
    string text2;

    for (size_t i = 0; i < text.size(); i++)
    {
        if ((isalnum(text[i])) || (isblank(text[i])))
        {
            text2 += text[i];
        }
    }

    cout << text2 << endl;
    return 0;
}
