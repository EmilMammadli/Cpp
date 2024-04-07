#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Implement a C++ function named sum that can be called with 2, 3, or 4 arguments. Use default arguments to handle the cases when fewer arguments are provided. The function should calculate and return the sum of the provided arguments.

    Input Format

    The function takes 2, 3, or 4 integer arguments.
*/

int sumNumbers(int x, int y, int z = 0, int j = 0)
{
    int sum = x + y + z + j;
    return sum;
}
int main()
{
    int a, b, c = 0, d = 0;
    cin >> a >> b >> c >> d;

    cout << sumNumbers(a, b, c, d) << endl;
    return 0;
}
