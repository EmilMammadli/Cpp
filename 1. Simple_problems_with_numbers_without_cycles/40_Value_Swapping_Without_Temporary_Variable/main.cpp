#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given two integers A and B, swap their values without using a third variable.
*/

int main()
{
    int a;
    int b;

    cin >> a;
    cin >> b;

    int c = a;
    a = b;
    b = c;

    cout << a << " " << b << endl;
    return 0;
}
