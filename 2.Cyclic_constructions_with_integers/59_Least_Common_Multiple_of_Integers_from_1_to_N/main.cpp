#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given a natural number N, find the least common multiple (LCM) of all integers from 1 to N.
*/

int main()
{
    int N;
    cin >> N;

    int factorial = 1;
    int i;

    for (i = 1; i <= N; i++)
    {
        factorial = factorial * i;
    }

    int a;
    bool flag;

    for (a = 1; a <= factorial; a++)
    {
        for (i = 1; i <= N; i++)
        {
            if (a % i == 0)
            {
                flag = true;
            }
            else
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            cout << a << endl;
            break;
        }
    }
    return 0;
}
