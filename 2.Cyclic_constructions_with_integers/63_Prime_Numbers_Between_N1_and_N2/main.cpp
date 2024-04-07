#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given two natural numbers N1 and N2, find all prime numbers between N1 and N2 (inclusive).
*/

int main()
{
    int N1;
    cin >> N1;

    int N2;
    cin >> N2;

    int a; // numbers
    int i; // dividers
    int count = 0;

    for (a = N1; a <= N2; a++)
    {
        count = 0;
        for (i = 1; i <= a; i++)
        {
            if (a % i == 0)
            {
                count++;
            }
            if (count > 2)
            {
                break;
            }
        }
        if (count == 2)
        {
            cout << a << " ";
        }
    }

    cout << endl;

    return 0;
}
