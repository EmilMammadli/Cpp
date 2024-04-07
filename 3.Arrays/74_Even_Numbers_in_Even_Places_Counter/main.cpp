#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given a sequence of integers, count the number of even numbers that appear at even positions (0-based index) in the sequence.
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

    for (int i = 0; i < size; i = i + 2)
    {
        if (arr[i] % 2 == 0)
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
