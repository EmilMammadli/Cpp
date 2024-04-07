#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

/*
    Write a C++ program to perform the following steps:

    Declare two character arrays str1 and str2 of size 100 to store the strings.
    Declare two character pointer variables s1 and s2.
    Ask the user to enter two strings (character arrays) of up to 100 characters each.
    Assign the memory address of the character array str1 to the pointer s1.
    Assign the memory address of the character array str2 to the pointer s2.
    Determine the length of the first string using strlen function and store it in a variable len1.
*/

int main()
{
    char str1[100];
    char str2[100];
    char *s1 = nullptr;
    char *s2 = nullptr;
    cin.getline(str1, 100);
    cin.getline(str2, 100);
    s1 = &str1[0];
    s2 = &str2[0];
    size_t len1 = strlen(s1);
    int n = 0;

    for (int i = len1; i < 100; i++)
    {
        *(s1 + i) = *(s2 + n);
        n = n + 1;
        if (*(s2 + n) == '\0')
        {
            *(s1 + i + 1) = '\0';
            break;
        }
    }

    cout << "Concatenated string: " << s1 << endl;
    return 0;
}
