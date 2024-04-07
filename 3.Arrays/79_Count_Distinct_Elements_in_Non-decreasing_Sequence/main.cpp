#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given a non-decreasing sequence of integers, find the number of distinct elements in the sequence.
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

    for (size_t i = 0; i < size; i++)
    {
        for (size_t a = i + 1; a < size; a++)
        {
            if (arr[i] == arr[a])
            {
                count++;
                break;
            }
        }
    }

    int distinctElements = size - count;

    cout << "Distinct Elements: " << distinctElements << endl;

    return 0;
}
