#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given a sequence of integers, find the length of the section with the maximum number of consecutive zeros.
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

    int count = 0;
    int maximum = 0;

    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            count++;
            if (i == size - 1)
            {
                maximum = max(maximum, count);
            }
        }
        else
        {
            maximum = max(maximum, count);
            count = 0;
        }
    }

    cout << "Length of Maximum Consecutive Zeros: " << maximum << endl;
    return 0;
}
