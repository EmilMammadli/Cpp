#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Write a C++ program that takes a string as input and shifts every letter in the string to the next letter in the alphabet while preserving the case (uppercase remains uppercase, and lowercase remains lowercase). Non-alphabetic characters should remain unchanged.
*/

int main()
{

    string inputText;
    getline(cin, inputText);
    char simbols;

    for (int i = 0; i < inputText.length(); i++)
    {
        char simbols = inputText[i];
        if (isalpha(simbols))
        {
            simbols = simbols + 1;
            if (simbols == 91)
            {
                simbols = 65;
            }
            if (simbols == 123)
            {
                simbols = 97;
            }
            inputText[i] = simbols;
        }
        cout << inputText[i];
    }

    cout << endl;
    return 0;
}
