#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

/*
    Given a string, write a C++ program to count the number of vowels (a, e, i, o, u) in the string and print the count.
*/

int main()
{
    string text;
    getline(cin, text);

    char vowels[] = {'a', 'e', 'i', 'o', 'u', '\0'};
    int counter = 0;

    for (size_t i = 0; i < text.length(); i++)
    {
        for (int a = 0; a < strlen(vowels); a++)
        {
            if (text[i] == vowels[a])
            {
                counter++;
            }
        }
    }

    cout << "number of vowels -> " << counter << endl;
    return 0;
    return 0;
}
