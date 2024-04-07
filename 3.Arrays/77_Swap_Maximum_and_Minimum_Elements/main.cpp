#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given an array of integers, find the maximum and minimum elements in the array and then swap their positions.
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

    int maxNumber = max(arr[0], arr[1]);
    int minNumber = min(arr[0], arr[1]);

    for (size_t i = 2; i < size; i++)
    {
        maxNumber = max(maxNumber, arr[i]);
        minNumber = min(minNumber, arr[i]);
    }

    int a; // assign minNumber place
    int b; // assign maxNumber place

    for (size_t i = 0; i < size; i++)
    {
        if (maxNumber == arr[i])
        {
            a = i;
        };
        if (minNumber == arr[i])
        {
            b = i;
        };
    }

    arr[a] = minNumber;
    arr[b] = maxNumber;

    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
