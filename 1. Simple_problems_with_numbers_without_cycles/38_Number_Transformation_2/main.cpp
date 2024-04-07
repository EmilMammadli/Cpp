#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given two real numbers X and Y, apply the specified transformations based on the conditions: If X and Y are negative, replace each value with its absolute value. If only one of them is negative, increase both values by 0.5. If both values are non-negative and do not belong to the range [0.5, 2.0], reduce both values by 10 times. Otherwise, leave the numbers unchanged.
*/

int main()
{
    float x;
    float y;

    cin >> x;
    cin >> y;

    bool result1 = (x < 0) && (y < 0);
    bool result2 = (x < 0) || (y < 0);
    bool result3 = (x > 0) && (y > 0);
    bool result4 = ((x >= 0.5) && (x <= 2.0)) && ((y >= 0.5) && (y <= 2.0));

    if (result1)
    {
        cout << x * (-1) << " " << y * (-1) << endl;
    }
    else if (result2)
    {
        cout << x + 0.5 << " " << y + 0.5 << endl;
    }
    else if (result3 && !result4)
    {
        cout << x / 10 << " " << y / 10 << endl;
    }
    else
    {
        cout << x << " " << y << endl;
    }
    return 0;
}
