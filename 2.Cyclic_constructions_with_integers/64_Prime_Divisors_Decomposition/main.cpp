#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given a natural number N, decompose it into its prime divisors.
*/

int main()
{
    int N;
    cin >> N;

    int i;
    int a; // dividers
    int b; // finding primary
    int count;
    int count2;
    int c = N; // assign N

    for (i = 1; i <= N; i++)
    {
        if (N % i == 0)
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
                b--;
                count2 = 0;
                while (c > 0)
                {
                    if (c % b == 0)
                    {
                        count2++;
                    }
                    else
                    {
                        break;
                    }
                    c /= b;
                }
                cout << b << "^" << count2 << " ";
            }
        }
    }

    return 0;
}
