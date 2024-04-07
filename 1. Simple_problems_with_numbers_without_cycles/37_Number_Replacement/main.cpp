#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given four real numbers A, B, C, and D, apply the specified transformations based on the conditions: If D ≤ C ≤ B ≤ A, replace each number with the largest of them. If A < B < C < D, leave the numbers unchanged. Otherwise, replace all numbers with their squares.
*/

int main()
{
    float A;
    float B;
    float C;
    float D;

    cin >> A;
    cin >> B;
    cin >> C;
    cin >> D;

    bool result1 = (D <= C) && (C <= B) && (B <= A);
    bool result2 = (A < B) && (B < C) && (C < D);

    if (result1)
    {
        cout << A << " " << A << " " << A << " " << A << endl;
    }
    else if (result2)
    {
        cout << A << " " << B << " " << C << " " << D << endl;
    }
    else
    {
        cout << pow(A, 2) << " " << pow(B, 2) << " " << pow(C, 2) << " " << pow(D, 2) << endl;
    }
    return 0;
}
