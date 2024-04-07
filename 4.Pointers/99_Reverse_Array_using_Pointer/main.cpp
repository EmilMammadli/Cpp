#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Write a C++ program to perform the following steps:

    Declare an integer array arr of size 5 with elements [10, 20, 30, 40, 50].

    Declare an integer pointer ptr.

    Assign the memory address of the array arr to the pointer ptr.

    Use a loop and pointer arithmetic to iterate through the array in reverse order using the pointer, and print each element.
    
    Display the elements of the array in reverse order.
*/

int main()
{

    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = nullptr;
    ptr = &arr[0];

    for (int i = 4; i >= 0; i--)
    {
        cout << *(ptr + i) << endl;
    }

    return 0;
}
