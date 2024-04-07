#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given a natural number N, find all its divisors.
*/

int main()
{
    int N;
    cin >> N;

    int divider = 1;
    int count = 0;

    while (N >= 1 && N <= pow(10, 9))
    {
        if ((N % divider == 0) && (divider <= N))
        {
            count = divider;
            cout << count << " ";
        }
        divider++;
        if (divider > N)
        {
            break;
        }
    }
    return 0;
}
