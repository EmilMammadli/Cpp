#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Write a C++ program that takes an array of integers as input and finds the largest element in the array using a function. Display the result.

    An array of integers. The length of the array 'n' (1 <= n <= 100). n integers separated by spaces.

*/

int maxElement(int arr[], int n)
{

    int maximum = arr[0];
    for (int i = 0; i < n; i++)
    {
        maximum = max(maximum, arr[i]);
    }
    return maximum;
}
int main()
{

    int size;
    cin >> size;

    int array[size];

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    cout << maxElement(array, size) << endl;

    return 0;
}
