#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given three real numbers A, B, and C, check if each number belongs to the interval (1, 3). If a number belongs to the interval, print it; otherwise, skip it.
*/

int main()
{

    float A;
    float B;
    float C;

    cin >> A;
    cin >> B;
    cin >> C;

    bool result1 = (A >= 1) && (A <= 3);
    bool result2 = (B >= 1) && (B <= 3);
    bool result3 = (C >= 1) && (C <= 3);

    if (result1 && result2 && result3)
    {
        cout << A << " " << B << " " << C << endl;
    }
    else if (result1 && result2)
    {
        cout << A << " " << B << endl;
    }
    else if (result1 && result3)
    {
        cout << A << " " << C << endl;
    }
    else if (result2 && result3)
    {
        cout << B << " " << C << endl;
    }
    else if (result1)
    {
        cout << A << endl;
    }
    else if (result2)
    {
        cout << B << endl;
    }
    else if (result3)
    {
        cout << C << endl;
    }
    else
    {
        cout << "No Numbers Found" << endl;
    }
    return 0;
}
