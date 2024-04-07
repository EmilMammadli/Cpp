#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given an array of N elements, replace each element (except the first and last) with half the sum of its neighboring elements.
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

    float arr2[size];
    arr2[0] = arr[0];
    arr2[size - 1] = arr[size - 1];

    for (size_t i = 1; i < (size - 1); i++)
    {
        float halfSum = (float(arr[i - 1]) + float(arr[i + 1])) / 2;
        arr2[i] = halfSum;
    }

    for (size_t i = 0; i < size; i++)
    {
        cout << arr2[i] << " ";
    }

    cout << endl;
    return 0;
}
