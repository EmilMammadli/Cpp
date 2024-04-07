#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given an array of integers of size N, find the number of local minima and local maxima. A local minimum is an element (except for the first and last) that is less than both of its neighbors. A local maximum is an element (except for the first and last) that is greater than both of its neighbors.
*/

int main()
{
    int size;
    cin >> size;

    int arr[size];

    for (size_t i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int minimaCount = 0;
    int maximaCount = 0;

    for (size_t i = 1; i < (size - 1); i++)
    {
        if ((arr[i] < arr[i - 1]) && (arr[i] < arr[i + 1]))
        {
            minimaCount++;
        }
        if ((arr[i] > arr[i - 1]) && (arr[i] > arr[i + 1]))
        {
            maximaCount++;
        }
    }

    cout << "Local Minima: " << minimaCount << endl;
    cout << "Local Maxima: " << maximaCount << endl;
    return 0;
}
