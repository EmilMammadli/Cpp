#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given a sequence of integers, find the number of occurrences of the subsequence 1, 2, 3, ..., 10 in the sequence. The subsequence should appear in the same order as given (i.e., consecutive elements from 1 to 10).
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

    int subSequence = 0;
    int count = 0;
    bool flag = false;

    for (size_t i = 0; i < size; i++)
    {
        subSequence = subSequence + 1;
        if ((arr[i] == subSequence) && (subSequence <= 10))
        {
            flag = true;
            if (subSequence == 10)
            {
                count++;
                subSequence = 0;
            }
        }
        else
        {
            flag = false;
            subSequence = 0;
        }
    }

    cout << "Occurrences of Subsequence: " << count << endl;

    return 0;
}
