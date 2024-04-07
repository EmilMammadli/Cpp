#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given an array of integers, check if the values of array elements are symmetrical. An array is considered symmetrical if it reads the same from left to right and from right to left.
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

    bool flag = false;

    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] == arr[size - 1 - i])
        {
            flag = true;
        }
        else
        {
            flag = false;
            break;
        }
    }

    if (flag == true)
    {
        cout << "Symmetrical" << endl;
    }
    else
    {
        cout << "Not Symmetrical" << endl;
    }

    return 0;
}
