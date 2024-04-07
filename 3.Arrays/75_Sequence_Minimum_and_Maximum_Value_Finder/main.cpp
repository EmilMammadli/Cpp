#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given a sequence of integers, find the minimum and maximum value of the sequence.
*/

int main()
{
    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int minNumber = min(arr[0], arr[1]);
    int maxNumber = 0;

    for (int i = (size - 1); i >= 0; i--)
    {
        minNumber = min(minNumber, arr[i]);
        maxNumber = max(maxNumber, arr[i]);
    }

    cout << "minimum = " << minNumber << ", "
         << "maximum = " << maxNumber << endl;

    return 0;
}
