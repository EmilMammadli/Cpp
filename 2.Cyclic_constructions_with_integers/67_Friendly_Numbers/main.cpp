#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Given two natural numbers M and N, find all pairs of friendly numbers between M and N (M < N < 10000). Two natural numbers A and B are called friendly if each of them is equal to the sum of divisors of the other, except for the number itself.  
*/

int main()
{
    int M;
    cin >> M;
    int N;
    cin >> N;

    int i;

    int a;
    int sumA; // first number

    int b;
    int sumB; // second number

    int c;
    int sumC; // for checking numbers

    for (i = M; i <= N; i++)
    {
        sumA = 0;
        for (a = 1; a < i; a++)
        {
            if (i % a == 0)
            {
                sumA += a;
            }
        }
        if ((sumA >= M) && (sumA <= N))
        {
            sumB = 0;
            for (b = 1; b < sumA; b++)
            {
                if (sumA % b == 0)
                {
                    sumB += b;
                }
            }
            if ((i == sumB) && (sumA < sumB))
            {
                cout << "(" << sumA << ", " << sumB << ")" << endl;
            }
        }
    }
    return 0;
}