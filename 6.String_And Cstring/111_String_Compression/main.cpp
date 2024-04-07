#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Write a function that takes a string as input and compresses it by replacing consecutive repeated characters with the character followed by the count of its repetitions. For example, "aaabbbcc" would become "a3b3c2."
*/

int main()
{
    string text;
    getline(cin, text);
    string text2;
    int counter = 1;
    int n = 0;

    for (size_t i = 0; i < text.size(); i++)
    {
        if (text[i] == text[i + 1])
        {
            counter++;
        }
        else
        {
            text2 += text[i];
            cout << text2[n] << counter;
            n = n + 1;
            counter = 1;
        }
    }

    return 0;
}
