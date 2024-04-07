#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given non-negative integers A, B, and positive integers R, S, check if the remainder obtained when dividing A by B is equal to either R or S.

    Write a C++ program that takes three non-negative integers A, B, R, and a positive integer S, and determines whether the remainder obtained when dividing A by B is equal to either R or S.
*/

int main()
{
    int a;
    int b;
    int r;
    int s;

    cin >> a;
    cin >> b;
    cin >> r;
    cin >> s;

    bool result1 = (a >= 0) && (b >= 0);
    bool result2 = (r > 0) && (s > 0);
    bool result3 = result1 && result2;
    bool result4 = ((a % b) == r) || ((a % b) == s);

    if (result3 && result4)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
