#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given two natural numbers A and B, find their least common multiple (LCM).
*/

int main()
{
    int A;
    int B;

    cin >> A;
    cin >> B;

    int division = max(A, B);
    int minDivision = 0;

    // 2
    // 3

    while ((A >= 1 && B >= 1) && (A <= pow(10, 9) && B <= pow(10, 9)) && (division >= A && division >= B))
    {
        if ((division % A == 0 && division % B == 0) && (division <= (A * B)))
        {
            minDivision = min(division, (A * B));
            break;
        }
        division++;
    }

    cout << minDivision;
    return 0;
}
