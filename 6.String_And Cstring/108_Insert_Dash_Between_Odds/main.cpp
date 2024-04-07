#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

/*
    Given a string of numbers, write a C++ program to insert a dash character ('-') between two distinct odd numbers in the string.
*/

int main()
{
    string text;
    getline(cin, text);

    char disNum[] = {'1', '3', '5', '7', '9', '\0'};

    for (size_t i = 0; i < text.length() - 1; i++)
    {
        for (size_t a = 0; a < strlen(disNum); a++)
        {
            if ((text[i] == disNum[a]) && (text[i] != text[i + 1]))
            {
                for (size_t c = 0; c < strlen(disNum); c++)
                {
                    if (text[i + 1] == disNum[c])
                    {
                        text.insert(i + 1, "-");
                    }
                }
            }
        }
    }

    cout << text << endl;

    return 0;
}
