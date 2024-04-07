#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given a string containing words separated by spaces, write a C++ program to find and output the largest word in the string. The largest word is the one with the most characters. If there are multiple words with the same maximum length, output the first one encountered.
*/

int main()
{
    string text;
    getline(cin, text);
    int maximum = 0;
    int counter = 0;

    for (size_t i = 0; i < text.size(); i++)
    {
        if (isalpha(text[i]))
        {
            counter++;
        }
        else if (!isalpha(text[i]))
        {
            maximum = max(maximum, counter);
            counter = 0;
        }
    }

    // finding number of word

    counter = 0;

    for (size_t i = 0; i < text.size(); i++)
    {
        if (isalpha(text[i]))
        {
            counter++;
        }
        if (counter == maximum)
        {
            for (size_t j = i - maximum + 1; j <= i; j++)
            {
                cout << text[j];
            }
            break;
        }
        if (!isalpha(text[i]))
        {
            counter = 0;
        }
    }

    return 0;
}
