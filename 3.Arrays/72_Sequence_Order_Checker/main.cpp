#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given a sequence of integers, check if it is in ascending order, descending order, or neither. An ascending sequence is a sequence in which each element is greater than to the previous element. A descending sequence is a sequence in which each element is less than to the previous element. If none of these conditions are met, the sequence is neither ascending nor descending.
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

    bool flag1, flag2 = false;

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            flag1 = true;
        }
        else
        {
            flag1 = false;
            break;
        }
    }

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            flag2 = true;
        }
        else
        {
            flag2 = false;
            break;
        }
    }

    if (flag1 == true)
    {
        cout << "Ascending" << endl;
    }
    else if (flag2 == true)
    {
        cout << "Descending" << endl;
    }
    else
    {
        cout << "Neither" << endl;
    }

    return 0;
}
