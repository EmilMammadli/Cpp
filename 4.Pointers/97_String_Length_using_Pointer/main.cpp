#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Write a C++ program to perform the following steps:

    Declare a character array text of size 100 to store the string.
    Declare a character pointer ptr.
    Ask the user to enter a string (character array) of up to 100 characters.
*/

int main()
{
    char arr[100];
    char *ptr = nullptr;
    cin.get(arr, 100);
    ptr = &arr[0];
    int count = 0;

    for (int i = 0; i < 100; i++)
    {
        if (*(ptr + i) != '\0')
        {
            count++;
        }
        else
        {
            break;
        }
    }

    cout << "Length of the string: " << count << endl;
    return 0;
}
