#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;

/*
    Write a C++ program that takes a string as input and outputs the reverse of that string.
*/

int main()
{
    string text;

    getline(cin, text);

    for (int i = text.length() - 1; i >= 0; i--)
    {
        cout << text[i];
    }

    cout << endl;

    return 0;
}
