#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given an array of N elements and an integer K (1 <= K <= N), reverse the elements of the array from index K to index N.
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

    int reversePoint;
    cin >> reversePoint;

    if (reversePoint == 1)
    {
        for (int i = (size - 1); i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
    }
    else if (reversePoint > 1)
    {
        for (size_t i = 0; i < (reversePoint - 1); i++)
        {
            cout << arr[i] << " ";
        }
        for (size_t i = (size - 1); i >= (reversePoint - 1); i--)
        {
            cout << arr[i] << " ";
        }
    }

    cout << endl;
    return 0;
}
