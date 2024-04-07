#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given a sequence of integers, check if it forms an arithmetic progression. An arithmetic progression is a sequence of numbers in which the difference between any two consecutive terms is constant.
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

    int dif = arr[1] - arr[0];
    bool flag;

    for (int i = 2; i < size; i++)
    {
        flag = true;
        int currentDif = arr[i] - arr[i - 1];
        if (currentDif != dif)
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
