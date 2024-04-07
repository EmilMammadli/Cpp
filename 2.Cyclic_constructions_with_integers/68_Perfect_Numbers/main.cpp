#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given a natural number N, find all perfect numbers less than N. A natural number is called perfect if it is equal to the sum of all its divisors except itself.
*/

int main()
{
    int N;
    cin >> N;

    int i;   // numbers till N
    int a;   // numbers dividers
    int sum; // sum dividers

    for (i = 1; i <= N; i++)
    {
        sum = 0;
        for (a = 1; a < i; a++)
        {
            if (i % a == 0)
            {
                sum = sum + a;
            }
            if (sum > i)
            {
                break;
            }
        }
        if (sum == i)
        {
            cout << i << " ";
        }
    }
    return 0;
}
