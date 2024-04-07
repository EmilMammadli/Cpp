#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    You are given a sequence of integers. Your task is to find the maximum element in the sequence and determine its first and last occurrences.
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

    for (size_t i = 2; i < size; i++)
    {
        maxNumber = max(maxNumber, arr[i]);
    }

    cout << "The maximum element is: " << maxNumber << endl;

    int count = 0;

    for (size_t i = 0; i < size; i++)
    {
        if (maxNumber == arr[i])
        {
            count++;
        }
    }

    cout << "The number of occurrences of the maximum element is: " << count << endl;

    // firstPosition;

    for (size_t i = 0; i < size; i++)
    {
        if (maxNumber == arr[i])
        {
            cout << "The position of the first maximum element is: " << i << endl;
            break;
        }
    }

    // lastPosition;

    for (size_t i = (size - 1); i >= 0; i--)
    {
        if (maxNumber == arr[i])
        {
            cout << "The position of the last maximum element is: " << i << endl;
            break;
        }
    }
    return 0;
}
