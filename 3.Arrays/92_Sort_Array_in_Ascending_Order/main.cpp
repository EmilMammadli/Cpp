#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given an array of N elements, sort the elements in ascending order.
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

    int minimum;

    for (int i = 0; i < size; i++)
    {
        for (int a = i + 1; a < size; a++)
        {
            if (arr[a] < arr[i])
            {
                minimum = arr[a];
                arr[a] = arr[i];
                arr[i] = minimum;
            }
            else
            {
                continue;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
