#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Write a C++ program to perform the following steps:

    Declare two character arrays source and destination of size 100 to store the strings.

    Declare two character pointer variables ptrSource and ptrDestination.

    Ask the user to enter a source string (character array) of up to 100 characters.

    Assign the memory address of the source character array source to the pointer ptrSource.

    Assign the memory address of the destination character array destination to the pointer ptrDestination.

    Use a loop and pointer arithmetic to iterate through the characters of the source string using the pointer ptrSource, and copy each character to the destination string using the pointer ptrDestination.

    Add a null character \0 to the end of the destination string to terminate it.
    
    Display the copied string (destination string).
*/

int main()
{
    char source[100];
    char destination[100];
    char *ptrSource = nullptr;
    char *ptrDestination = nullptr;
    cin.getline(source, 100);
    ptrSource = &source[0];
    ptrDestination = &destination[0];

    for (int i = 0; i < 100; i++)
    {
        if (*(ptrSource + i) != '\0')
        {
            *(ptrDestination + i) = *(ptrSource + i);
        }
        else
        {
            *(ptrDestination + i) = '\0';
            break;
        }
    }

    cout << "Copied string: " << ptrDestination << endl;

    return 0;
}
