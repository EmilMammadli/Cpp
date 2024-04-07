#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given an array of N elements and an integer K (1 <= K <= N), reverse the elements of the array from index 1 to index K.
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

    int reverseFrom;
    cin >> reverseFrom;

    for (int i = (reverseFrom - 1); i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    for (int i = reverseFrom; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
