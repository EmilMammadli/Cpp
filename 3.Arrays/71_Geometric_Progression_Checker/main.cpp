#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given a sequence of integers, check if it forms a geometric progression. A geometric progression is a sequence of numbers in which the ratio between any two consecutive terms is constant.
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

    float ratio = float(arr[1]) / float(arr[0]);

    bool flag = true;

    for (int i = 2; i < size; i++)
    {
        float currentRatio = float(arr[i]) / float(arr[i - 1]);
        if (currentRatio != ratio)
        {
            flag = false;
            break;
        }
    }

    if (flag == true)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
