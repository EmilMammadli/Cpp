#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

/*
    Given a string containing alphabetic characters, write a C++ program to sort and output the characters in the string in ascending order. Exclude numbers and punctuation symbols from sorting.
*/

int main()
{
    string text;
    getline(cin, text);
    int minimum;

    for (size_t i = 0; i < text.size(); i++)
    {
        for (size_t j = i + 1; j < text.size(); j++)
        {
            minimum = min((int)text[i], (int)text[j]);
            if (minimum == (int)text[j])
            {
                text[j] = text[i];
                text[i] = minimum;
            }
        }
    }

    for (size_t i = 0; i < text.size(); i++)
    {
        if (isalpha(text[i]))
        {
            cout << text[i];
        }
    }

    cout << endl;

    return 0;
}
