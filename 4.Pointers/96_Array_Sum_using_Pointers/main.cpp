#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Write a C++ program to perform the following steps:

    Declare an integer array arr of with size length.
    Declare an integer pointer ptr.
    Assign the memory address of the array arr to the pointer ptr.
    Use a loop and pointer arithmetic to iterate through the array using the pointer and calculate the sum of all array elements.
    Display the sum of the array elements.
*/

int main()
{
    int length;
    cin >> length;
    int arr[length];
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }
    int *ptr = nullptr;
    ptr = &arr[0];

    int sum = 0;

    for (int i = 0; i < length; i++)
    {
        sum = sum + *(ptr + i);
    }

    cout << "Sum of array elements: " << sum << endl;

    return 0;
}
