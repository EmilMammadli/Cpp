#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given a natural number N, find all twin prime numbers not exceeding N (N < 10000). Twin primes are prime numbers that differ from each other by 2.
*/

int main()
{
    int N;
    cin >> N;

    int i;
    int count;
    int a;
    int b;
    int d;
    int count2;
    int e;

    for (i = 1; i <= N; i++)
    {
        a = i;
        count = 0;
        for (b = 1; b <= a; b++)
        {
            if (a % b == 0)
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
            d = a + 2;
            if (d < N)
            {
                count2 = 0;
                for (e = 1; e <= d; e++)
                {
                    if (d % e == 0)
                    {
                        count2++;
                    }
                    if (count2 > 2)
                    {
                        break;
                    }
                }
                if (count2 == 2)
                {
                    cout << "(" << a << ", " << d << ")" << endl;
                }
            }
        }
    }
    return 0;
}
