#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Write a C++ program that takes two strings as input and checks whether they are anagrams of each other using a function. Display the result.

    Input Format:

    Two strings, separated by newlines.
*/

bool anagramChecker(string format1, string format2)
{
    int length1 = format1.length();
    int length2 = format2.length();
    if (length1 != length2)
    {
        return false;
    }
    for (int i = 0; i < length1; i++)
    {
        for (int j = 0; j < length2; j++)
        {
            if (format1[i] == format2[j])
            {
                format2[j] = ' ';
                break;
            }
        }
    }
    for (int i = 0; i < length2; i++)
    {
        if (format2[i] != ' ')
        {
            return false;
        }
    }
    return true;
}

int main()
{

    string text1;
    cin >> text1;
    string text2;
    cin >> text2;

    if (text1.length() == text2.length())
    {
        if (anagramChecker(text1, text2) == true)
        {
            cout << "Anagram" << endl;
        }
        else
        {
            cout << "Not Anagram" << endl;
        }
    }

    return 0;
}
