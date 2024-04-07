#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given an array of integers and a number x, find and print whether x is closest to the minimum value in the array, the maximum value, or the arithmetic mean of the array.
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

    int number;
    cin >> number;

    int sum = 0;
    int maximum = 0;
    int minimum = arr[0];

    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
        maximum = max(maximum, arr[i]);
        minimum = min(minimum, arr[i]);
    }

    int mean = sum / size;

    int meanDif = mean - number;
    int maxDif = maximum - number;
    int minDif = minimum - number;

    if (meanDif < 0)
    {
        meanDif = meanDif * -1;
    }
    if (maxDif < 0)
    {
        maxDif = maxDif * -1;
    }
    if (minDif < 0)
    {
        minDif = minDif * -1;
    }

    if ((meanDif) < (maxDif) && (meanDif) < (minDif))
    {
        cout << "Mean" << endl;
    }
    else if ((maxDif) < (meanDif) && (maxDif) < (minDif))
    {
        cout << "Maximum" << endl;
    }
    else if ((minDif) < (meanDif) && (minDif) < (maxDif))
    {
        cout << "Minimum" << endl;
    }
    return 0;
}
