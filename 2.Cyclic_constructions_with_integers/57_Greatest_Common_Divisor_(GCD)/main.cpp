#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given two natural numbers A and B, find their greatest common divisor (GCD).
*/

int main()
{
    int A;
    int B;

    cin >> A;
    cin >> B;

    int divider = 1;
    int maxDivider = 0;

    while ((A >= 1 && B >= 1) && (A <= pow(10, 9) && B <= pow(10, 9)) && (divider < A && divider < B))
    {
        if (A % divider == 0 && B % divider == 0)
        {
            maxDivider = max(maxDivider, divider);
        }
        divider++;
    }

    cout << maxDivider;

    return 0;
}
