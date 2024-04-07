#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given an array of N elements, cyclically shift the array elements by one position to the right.
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

    cout << arr[size - 1] << " ";

    for (int i = 0; i < size - 1; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
