#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given a natural number N, expand N! (N factorial) into its prime divisors.
*/

int main()
{
    int N;
    cin >> N;

    int i;
    int count;
    int number = 1; // factorial
    int a;
    int count2;
    int number2;

    for (i = 1; i <= N; i++)
    {
        number = number * i;
    }
    for (i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            count = 0;
            for (a = 1; a <= i; a++)
            {
                if (i % a == 0)
                {
                    count++;
                }
                if (count > 2)
                {
                    break;
                }
            }
            a--;
            if (count == 2)
            {
                count2 = 0;
                number2 = number;
                while (number2 > 0)
                {
                    if (number2 % a == 0)
                    {
                        count2++;
                    }
                    else
                    {
                        break;
                    }
                    number2 = number2 / a;
                }
                cout << a << "^" << count2 << " ";
            }
        }
        else
        {
            break;
        }
    }
    return 0;
}
