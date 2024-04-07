#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given a sequence of integers, find the length of the largest ascending portion in the sequence. An ascending portion is a subsequence in which each element is greater than the previous element.
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

    int count = 0;

    int maximum = 0;

    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            count++;
        }
        else
        {
            count = 0;
        }
        maximum = max(count, maximum);
    }
    cout << "Length of Largest Ascending Portion: " << maximum << endl;
    return 0;
}
