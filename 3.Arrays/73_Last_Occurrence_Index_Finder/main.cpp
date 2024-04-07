#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given a sequence of integers, ask the user to enter a number. Find the last occurrence of the entered number in the sequence and return its ordinal number (index) in the sequence. If the number is not found in the sequence, return "Not Found".
*/

int main()
{
    int size;
    cin >> size;

    int arr[size];

    int i;

    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int number;

    cin >> number;
    bool flag = false;

    for (i = (size - 1); i >= 0; i--)
    {
        if (arr[i] == number)
        {
            flag = true;
            break;
        }
    }

    if (flag == true)
    {
        cout << "Last Occurrence Index: " << i << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
    return 0;
}
