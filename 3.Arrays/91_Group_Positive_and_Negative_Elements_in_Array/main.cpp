#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given an array of N elements, rearrange the elements such that positive elements are placed at the beginning of the array, and negative elements are placed at the end, preserving their original order.
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

    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            cout << arr[i] << " ";
        }
    }

    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            cout << arr[i] << " ";
        }
    }

    cout << endl;

    return 0;
}
