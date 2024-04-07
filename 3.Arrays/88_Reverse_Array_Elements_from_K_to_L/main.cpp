#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given an array of N elements and two integers K and L, where 1 <= K <= L <= N, reverse the elements of the array from index K to index L.
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

    int reverseFrom; // K
    cin >> reverseFrom;

    int reverseTo; // L
    cin >> reverseTo;

    if (reverseFrom == 1)
    {
        for (int i = reverseTo - 1; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
        for (int i = reverseTo; i < size; i++)
        {
            cout << arr[i] << " ";
        }
    }
    else if (reverseFrom > 1)
    {
        for (int i = 0; i < reverseFrom - 1; i++)
        {
            cout << arr[i] << " ";
        }
        for (int i = reverseTo - 1; i >= (reverseFrom - 1); i--)
        {
            cout << arr[i] << " ";
        }
        for (int i = reverseTo; i < size; i++)
        {
            cout << arr[i] << " ";
        }
    }

    cout << endl;
    return 0;
}
