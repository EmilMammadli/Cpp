#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given an array of integers, find the number of distinct elements in the array (ignoring duplicate occurrences).
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

    int count = 0; // counting same type

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

    int distinctElement = size - count;

    cout << "Distinct Elements: " << distinctElement << endl;

    return 0;
}
